/* 5. Write a function to display stack elements. */
#include <stdio.h>
#define max 10
int stack[max];
int top = -1;
void push()
{
    int x = 1;
    while(x == 1)
    {
        int value;
        printf("enter element :");
        scanf("%d",&value);
        top++;
        stack[top] = value;
        printf("%d pushed sucessfully!.\n",value);
        printf("enter 1 to push and 0 to exit :");
        scanf("%d",&x);   
    }
}

void display()
{
    if(top == -1)
    {
        printf("stack is empty!.\n");
        return;
    }
    printf("elements in the stack are :\n");
    for(int i = 0;i <= top;i++)
    {
        printf("%d\t",stack[i]);
    }
    printf("\n");
}

int main()
{
    push();
    display();
    return 0;
}