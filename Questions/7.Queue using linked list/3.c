/* 3. Write a function to dequeue an element. */
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

int main()
{
    enqueue();
    display();
    dequeue();
    return 0;
}