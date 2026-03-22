/* 4. Write a function to display queue elements. */
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

int main()
{
    enqueue();
    display();
    return 0;
}