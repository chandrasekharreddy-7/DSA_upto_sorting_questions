/* Infix to Prefix Conversion
Write a C program to convert an infix expression into prefix expression using stack.
Example:
Input: A + B * C
Output: +A*BC */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 10
char stack[max];
int top = -1;
void push(char ch)
{
    if(top == max-1)
    {
        printf("stack overflow!. cannot push!.\n");
    }
    else
    {
        top++;
        stack[top] = ch;
    }
}

char pop()
{
    char ch;
    ch = stack[top];
    top--;
    return ch;
}

int precedence(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else if(ch == '*' || ch == '/')
    {
        return 2;
    }
    else if(ch == '^')
    {
        return 3;
    }
    else
    {
        return 0;
    }
}

void reverse(char str[])
{
    int i=0, j=strlen(str)-1;
    char temp;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}

int main()
{
    char infix[100];
    char prefix[100];
    int j = 0;
    printf("please enter the infix expression :");
    scanf("%s",infix);
    for (int i = strlen(infix) - 1;i >= 0;i--)
    {
        char ch = infix[i];
        if(isalnum(ch))
        {
            prefix[j] = ch;
            j++;
        }
        else if(ch == ')')
        {
            push(ch);
        }
        else if(ch == '(')
        {
            while(top != -1 && stack[top] != ')')
            {
                prefix[j] = pop();
                j++;
            }
            pop();
        }
        else
        {
            while(top != -1 && ((precedence(stack[top]) > precedence(ch)) 
            || (precedence(stack[top]) == precedence(ch) && ch != '^')))
            {
                prefix[j] = pop();
                j++;
            }
            push(ch);
        }
    }
    while(top != -1)
    {
        prefix[j] = pop();
        j++;
    }
    prefix[j] = '\0';
    reverse(prefix);
    printf("prefix expression : %s\n",prefix);
    return 0;
}