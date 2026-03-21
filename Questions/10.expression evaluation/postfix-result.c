/* Evaluate the following postfix expressions:
1. 564+*321+*-
2. 743+*52ˆ6/- */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define max 20
int stack[max];
int top = -1;
void push(int x)
{
    stack[++top] = x;
}
int pop()
{
    char ch = stack[top];
    top--;
    return ch;
}
int postfix_evaluation(char str[])
{
    int i;
    for(i = 0; i < strlen(str); i++)
    {
        char ch = str[i];
        if(isdigit(ch))
        {
            push(ch - '0');
        }
        else
        {
            int val2 = pop();
            int val1 = pop();
            switch(ch)
            {
                case '+': push(val1 + val2); break;
                case '-': push(val1 - val2); break;
                case '*': push(val1 * val2); break;
                case '/': push(val1 / val2); break;
            }
        }
    }
    return pop();
}
int main()
{
    char postfix[100];
    printf("enter postfix expression to evaluate :");
    scanf("%s",postfix);
    printf("result = %d", postfix_evaluation(postfix));
    return 0;
}