/* 2. Write a function to enqueue an element. */
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL,*rear = NULL;
void enqueue()
{
    int choice = 1;
    while(choice == 1)
    {
        int value;
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter value to insert :");
        scanf("%d",&value);
        newnode -> data = value;
        newnode -> next = NULL;
        if(rear == NULL)
        {
            front = rear = newnode;
        }
        else
        {
            rear -> next = newnode;
            rear = newnode;
        }
        printf("%d inserted sucessfully!.\n");
        printf("enter 1 to enqueue and 0 to exit :");
        scanf("%d",&choice);
        if(choice != 1)
        {
            printf("enqueue ended sucessfully!.\n");
        }
    }
}

void display()
{
    if(front == NULL)
    {
        printf("Queue is empty!.\n");
        return;
    }
    printf("elements in the queue are :\n");
    struct node *temp = front;
    while(temp != NULL)
    {
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}

int main()
{
    enqueue();
    display();
    return 0;
}