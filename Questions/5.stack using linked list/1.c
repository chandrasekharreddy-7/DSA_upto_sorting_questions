/* 1. Write a C program to implement stack using linked list. */
#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push()
{
    int x = 1;
    while(x == 1)
    {   struct node *newnode;
        int value;
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode == NULL)
        {
            printf("stack overflow!.\n");
            return;
        }
        printf("enter value to push :");
        scanf("%d",&value);
        newnode -> data = value;
        newnode -> next = top;
        top = newnode;
        printf("%d inserted sucessfully!.\n",value);
        printf("enter 1 to push and 0 to exit :");
        scanf("%d",&x);
    }
}

void display()
{
    struct node *temp;
    if(top == NULL)
    {
        printf("stack is empty!.\n");
        return;
    }
    temp = top;
    printf("elements in the stack are(top -> bottom) :\n");
    while(temp != NULL)
    {
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}

void pop()
{
    struct node *temp;
    if(top == NULL)
    {
        printf("stack underflow!. cannot pop\n");
        return;
    }
    temp = top;
    top = top -> next;
    free(temp);
    printf("stack after popping :\n");
    display();
}

void peek()
{
    if(top == NULL)
    {
        printf("stack is empty!.\n");
        return;
    }
    printf("peek element : %d\n",top -> data);
}

void isempty()
{
    if(top == NULL)
    {
        printf("stack is empty!.\n");
        return;
    }
    printf("stack is not empty :\n");
    display();
}

void count()
{
    if(top == NULL)
    {
        printf("stack is empty!.\n");
        return;
    }
    struct node *temp = top;
    int c = 0;
    while(temp != NULL)
    {
        c++;
    }
    printf("total elements in the stack : %d\n",c);
}

void search()
{
    if(top == NULL)
    {
        printf("stack is empty!.\n");
        return;
    }
    struct node *temp = top;
    int key,pos;
    printf("please enter element to find from stack :");
    scanf("%d",key);
    while(temp != NULL)
    {
        if(temp -> data == key)
        {
            printf("element (%d) found at position %d\n",key,pos);
            return;
        }
    }
    printf("element (%d) not found in the stack!\n",key);
}

int main()
{
    int choice;
    push();
    printf("entered list :\n");
    display();
    do
    {
        printf("===   ENTER YOUR OPTION FROM BELOW   ===\n");
        printf("1. display\n");
        printf("2. pop\n");
        printf("3. peek\n");
        printf("4. isempty\n");
        printf("5. count\n");
        printf("6. search\n");
        printf("7. push again\n");
        printf("8. exit\n");
        printf("enter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: display(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: isempty(); break;
            case 5: count(); break;
            case 6: search(); break;
            case 7: push(); break;
            case 8: printf("Exiting . . .\n"); printf("program exited sucessfully!.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 8);
    return 0;
}