/* 7. Write a C program to delete an element from a given position in an array. */
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
    printf("please enter position to delete the element :");
    scanf("%d",&pos);
    if(pos <= 0 || pos > size)
    {
        printf("please enter correct position.\n");
        return 0;
    }
    for(int i = pos-1;i < size - 1;i++)
    {
        array[i] = array[i+1];
    }
    size--;
    printf("array after deleting element at position %d :\n",pos);
    for(int i = 0;i < size;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    return 0;
}