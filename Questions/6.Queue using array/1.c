/* 1. Write a C program to implement queue using array. */
#include <stdio.h>
#define max 4
int queue[max];
int front = -1;
int rear = -1;
void enqueue()
{
    int automate = 1;
    while(automate == 1)
    {
        if(rear == max - 1)
        {
            printf("queue overflow!. cannot enqueue.\n");
            break;
        }
        else
        {
            if(front == -1)
            {
                front = 0;
            }
            rear++;
            printf("enter the data to enqueue :");
            scanf("%d",&queue[rear]);
            printf("%d inserted sucessfully!.\n",queue[rear]);;
        }
        printf("enter 1 to enqueue and 0 to exit :");
        scanf("%d",&automate);
        if(automate != 1)
        {
            printf("enqueue ended succesfully!.\n");
        }
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("queue underflow!. cannot enqueue!.\n");
        return;
    }
    else
    {
        int ch = queue[front];
        front++;
        printf("%d enqueued succesfully!.\n",ch);
    }
    if(front > rear)
    {
        front = rear = -1;
    }
}

void peek()
{
    if(rear == -1)
    {
        printf("queue is empty!.\n");
        return;
    }
    printf("peek element in queue : %d\n",queue[front]);
}

void display()
{
    if(rear == -1)
    {
        printf("queue is empty!.\n");
        return;
    }
    printf("elements in the queue are :\n");
    for(int i = front;i <= rear;i++)
    {
        printf("%d\t",queue[i]);
    }
    printf("\n");
}

void isempty()
{
    if(front == -1 || front > rear)
    {
        printf("Queue is empty!.\n");
        return;
    }
    else
    {
        printf("queue is not empty!.\n");
        display();
    }
}

void isfull()
{
    if(rear == max-1)
    {
        printf("queue is full!.\n");
        return;
    }
    printf("queue is not full!.\n");
}

int main()
{
    int choice;
    enqueue();
    do
    {
        printf("****   BELOW STACK OPERATIONS   ****\n");
        printf("1. dequeue\n");
        printf("2. display\n");
        printf("3. isempty\n");
        printf("4. isfull\n");
        printf("5. peek\n");
        printf("6. enqueue again\n");
        printf("7. exit\n");
        printf("enter your choice (1 - 7) :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: dequeue(); break;
            case 2: display(); break;
            case 3: isempty(); break;
            case 4: isfull(); break;
            case 5: peek(); break;
            case 6: enqueue(); break;
            case 7: printf("Exiting . . .\n"); printf("program ended sucessfully!.\n"); break;
            default: printf("Invalid choice!.\n");
        }
    } while (choice != 7);
    return 0;
}