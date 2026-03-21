/* 6. Write a function to insert a node at a specific position. */
#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *create()
{
    int num = 1;
    struct node *head = NULL,*temp = NULL,*newnode = NULL;
    while(num == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter data :");
        scanf("%d",&newnode -> data);
        newnode -> next = NULL;
        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp -> next = newnode;
            temp =newnode;
        }
        printf("enter 1 to create and 0 to exit :");
        scanf("%d",&num);
        if(num != 1)
        {
            printf("create program ended sucessfully!.\n");
        }
    }
    return head;
}

void display(struct node *head)
{
    struct node *temp = head;
    if(head == NULL)
    {
        printf("list is empty!.\n");
        return;
    }
    printf("elements in the list are :\n");
    while(temp != NULL)
    {
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}

int count(struct node *head)
{
    struct node *temp = head;
    int c = 0;
    if(head == NULL)
    {
        printf("list is empty!.\n");
        return c;
    }
    while(temp != NULL)
    {
        temp = temp -> next;
        c++;
    }
    return c;
}

struct node *insertatposition(struct node *head,int pos)
{
    struct node *newnode,*temp = head;
    int n = count(head) + 1;
    if(pos <= 0 || pos > n)
    {
        printf("please enter correct position to insert.\n");
        return head;
    }
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter element to insert at position %d :",pos);
    scanf("%d",&newnode -> data);
    newnode -> next = NULL;
    if(pos == 1)
    {
        newnode->next = head;
        return newnode;
    }
    for(int i = 1;i < pos - 1;i++)
    {
        temp = temp -> next;
    }
    newnode -> next = temp -> next;
    temp -> next = newnode;
    return head;
}

int main()
{
    struct node *head = NULL;
    head = create();
    display(head);
    int pos;
    printf("enter position to insert :");
    scanf("%d",&pos);
    head = insertatposition(head,pos);
    printf("list after inserting element at position %d :\n",pos);
    display(head);
    return 0;
}