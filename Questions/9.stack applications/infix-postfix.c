/* Infix to Postfix Conversion
Write a C program to convert an infix expression into postfix expression using stack.
Example:
Input: A + B * C
Output: ABC*+ */
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
    if(top == -1)
    {
        return -1;
    }
    return stack[top--];
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

int main()
{
    char infix[100];
    char postfix[100];
    int j = 0;
    printf("please enter the infix expression :");
    scanf("%s",infix);
    for (int i = 0;i < strlen(infix);i++)
    {
        char ch = infix[i];
        if(isalnum(ch))
        {
            postfix[j] = ch;
            j++;
        }
        else if(ch == '(')
        {
            push(ch);
        }
        else if(ch == ')')
        {
            while(top != -1 && stack[top] != '(')
            {
                postfix[j++] = pop();
            }
            pop();
        }
        else
        {
            while(top != -1 &&
                  ((precedence(stack[top]) > precedence(ch)) ||
                  (precedence(stack[top]) == precedence(ch) && ch != '^')))
            {
                postfix[j++] = pop();
            }
            push(ch);
        }
    }
    while(top != -1)
    {
        postfix[j] = pop();
        j++;
    }
    postfix[j] = '\0';
    printf("postfix expression : %s",postfix);
    return 0;
}