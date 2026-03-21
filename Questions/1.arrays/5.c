/* 5. Write a C program to search an element using linear search. */
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
    int key,pos = 1;
    printf("enter element to search from array :");
    scanf("%d",&key);
    for(int i = 0;i < size;i++)
    {
        if(array[i] == key)
        {
            printf("element (%d) found at position %d\n",key,pos);
            return 0;
        }
        pos++;
    }
    printf("element %d not found in the array.\n",key);
    return 0;
}