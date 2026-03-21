/* 1. Write a C program to implement stack using array. */
#include <stdio.h>
#define max 10
int stack[max];
int top = -1;
void push()
{
    int x = 1;
    while(x == 1)
    {
        if(top == max - 1)
        {
            printf("stack overflow!. cannot push\n");
            return;
        }
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

void pop()
{
    if(top == -1)
    {
        printf("stack underflow!. cannot pop.\n");
        return;
    }
    printf("%d popped sucessfully!.\n",stack[top]);
    top--;
    printf("stack after popping :\n");
    display();
}

void peek()
{
    if(top == -1)
    {
        printf("stack is empty!.\n");
        return;
    }
    printf("peek element : %d\n",stack[top]);
}

void isempty()
{
    if(top == -1)
    {
        printf("stack is empty!.\n");
        return;
    }
    printf("stack is not empty!.\n");
    display();
}

void search()
{
    if(top == -1)
    {
        printf("stack is empty!.\n");
        return;
    }
    int key,position;
    printf("enter element to search :");
    scanf("%d",&key);
    for(int i = 0;i <= top;i++)
    {
        if(stack[i] == key)
        {
            printf("element (%d) found at position %d\n",key,position);
            return;
        }
        position++;
    }
    printf("element (%d) not found.\n",key);
}

void isfull()
{
    if(top == -1)
    {
        printf("stack is empty!.\n");
        return;
    }
    else if(top == max-1)
    {
        printf("stack is full\n");
        return;
    }
    else
    {
        printf("stack is not full!\n");
    }
}

void count()
{
    int c = 0;
    if(top == -1)
    {
        printf("stack is empty!.\n");
        return;
    }
    for(int i = 0;i <= top;i++)
    {
        c++;
    }
    printf("total no elements in the stack = %d\n",c);
}

int main()
{
    printf("please enter elements you have :\n");
    push();
    int choice;
    do
    {
        printf("====   ENTER YOUR OPTION FROM BELOW   ====\n");
        printf("1. display\n");
        printf("2. pop\n");
        printf("3. isempty\n");
        printf("4. peek\n");
        printf("5. search\n");
        printf("6. count\n");
        printf("7. isfull\n");
        printf("8. push again\n");
        printf("9. exit\n");
        printf("enter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: display(); break;
            case 2: pop(); break;
            case 3: isempty(); break;
            case 4: peek(); break;
            case 5: search(); break;
            case 6: count(); break;
            case 7: isfull(); break;
            case 8: push(); break;
            case 9: printf("Exiting . . .\n"); printf("program exited sucessfully!.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 9);
    return 0;
}