/* 6. Write functions to check overflow and underflow. */
#include <stdio.h>
#define max 10
int stack[max];
int top = -1;
void stack_overflow()
{
    if(top == max - 1)
    {
        printf("stack overflow!.\n");
        return;
    }
    printf("satck has space to push elements.\n");
}

// stack overflow occurs only in pop case when the top reaches -1.
void stack_underflow()
{
    if(top == -1)
    {
        printf("stack underflow!.\n");
        return;
    }
    printf("stack has elements. possible to pop.\n");
}

int main()
{
    stack_overflow();   // output : satck has space to push elements.
    stack_underflow();  // output : stack underflow!.
    return 0;
}