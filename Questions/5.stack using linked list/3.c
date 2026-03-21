/* 3. Write a function to pop an element from stack. */
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

int main()
{
    push();
    display();
    pop();
    return 0;
}