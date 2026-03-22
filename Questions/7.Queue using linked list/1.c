/* 1. Write a C program to implement queue using linked list. */
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

void dequeue()
{
    struct node *temp;
    if(front == NULL)
    {
        printf("Queue underflow!.\n");
        return;
    }
    temp = front;
    printf("%d element deleted sucessfully!.\n",temp -> data);
    front = front -> next;
    free(temp);
    printf("queue after dequeue :\n");
    display();
    if(front == NULL)
    {
        rear = NULL;
    }
}

void peek()
{
    if(front == NULL)
    {
        printf("Queue is empty!.\n");
        return;
    }
    printf("peek element : %d\n",front -> data);
}

void isempty()
{
    if(front == NULL)
    {
        printf("Queue is empty!.\n");
        return;
    }
    printf("queue is not empty!.\n");
    display();
}

int main()
{
    int choice;
    enqueue();
    display();
    do
    {
        printf("***  QUEUE OPERATIONS BELOW  ***\n");
        printf("1. display\n");
        printf("2. peek\n");
        printf("3. isempty\n");
        printf("4. dequeue\n");
        printf("5. Exit\n");
        printf("enter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: display(); break;
            case 2: peek(); break;
            case 3: isempty(); break;
            case 4: dequeue(); break;
            case 5: printf("Exiting . . .\n"); printf("program ended sucessfully!.\n"); break;
            default: printf("Invalid choice!.\n");
        }
    } while(choice != 5);
    return 0;   
}