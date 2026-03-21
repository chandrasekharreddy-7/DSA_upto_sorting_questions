/* 6. Write a C program to insert an element at a given position in an array. */
#include <stdio.h>
int main()
{
    int array[50],size;
    printf("enter size of array :");
    scanf("%d",&size);
    for(int i = 0;i < size;i++)
    {
        printf("enter element %d :",i+1);
        scanf("%d",&array[i]);
    }
    printf("entered elements are :\n");
    for(int i = 0;i < size;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    int pos,element;
    printf("please enter position to insert the element :");
    scanf("%d",&pos);
    if(pos <= 0 || pos > size)
    {
        printf("please enter correct position.\n");
        return 0;
    }
    if(size >= 50)
    {
        printf("array is full!.cannot insert.\n");
        return 0;
    }
    printf("enter element to insert at position %d :",pos);
    scanf("%d",&element);
    for(int i = size - 1;i >= pos - 1;i--)
    {
        array[i+1] = array[i];
    }
    array[pos - 1] = element;
    size++;
    printf("array after inserting element %d at position %d :\n",element,pos);
    for(int i = 0;i < size;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    return 0;
}