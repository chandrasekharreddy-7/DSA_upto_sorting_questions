/* 3. Write a C program to find the smallest element in an array. */
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
    int min = array[0];
    for(int i = 0;i < size;i++)
    {
        if(array[i] <= min)
        {
            min = array[i];
        }
    }
    printf("minimum element = %d\n",min);
}