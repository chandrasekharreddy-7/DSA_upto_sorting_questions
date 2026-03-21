/* 7. Write a function to delete the first node. */
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

struct node *deleteatbeginning(struct node *head)
{
    struct node *temp;
    if(head == NULL)
    {
        printf("list is empty!\n");
        return head;
    }
    temp = head;
    head = head -> next;
    free(temp);
    return head;
}

int main()
{
    struct node *head = NULL;
    head = create();
    display(head);
    head = deleteatbeginning(head);
    printf("list after deleting node at first :\n");
    display(head);
    return 0;
}