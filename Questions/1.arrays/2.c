/* 2. Write a C program to find the largest element in an array. */
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
    int max = array[0];
    for(int i = 0;i < size;i++)
    {
        if(array[i] >= max)
        {
            max = array[i];
        }
    }
    printf("maximum element = %d\n",max);
}