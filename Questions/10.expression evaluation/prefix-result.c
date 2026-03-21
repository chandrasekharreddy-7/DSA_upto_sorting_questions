/* Evaluate the following prefix expressions:
1. -*5+64*3+21
2. +7*4+23 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define max 20
int stack[max];
int top = -1;
void push(int x)
{
    top++;
    stack[top] = x;
}
int pop()
{
    char ch = stack[top];
    top--;
    return ch;
}
int prefix_evaluation(char str[])
{
    int i;
    for(i = strlen(str) - 1; i >= 0; i--)
    {
        char ch = str[i];
        if(isdigit(ch))
        {
            push(ch - '0');
        }
        else
        {
            int val1 = pop();
            int val2 = pop();
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
    char prefix[100];
    printf("enter prefix expression to evaluate: ");
    scanf("%s", prefix);
    printf("result = %d", prefix_evaluation(prefix));
    return 0;
}