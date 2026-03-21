/* 1. Write a C program to input 10 integers into an array and display them. */
#include <stdio.h>
int main()
{
    int array[10];
    for(int i = 0;i < 10;i++)
    {
        printf("enter element %d :",i+1);
        scanf("%d",&array[i]);
    }
    printf("entered elements are :\n");
    for(int i = 0;i < 10;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    return 0;
}