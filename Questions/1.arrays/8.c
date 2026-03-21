/* 8. Write a C program to reverse the elements of an array. */
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
    int temp;
    for(int i = 0;i < size/2;i++)
    {
        temp = array[i];
        array[i] = array[size-i-1];
        array[size-i-1] = temp;
    }
    printf("array after reversing :\n");
    for(int i = 0;i < size;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    return 0;
}