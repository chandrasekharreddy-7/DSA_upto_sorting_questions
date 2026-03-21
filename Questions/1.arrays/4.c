/* 4. Write a C program to calculate the sum and average of array elements. */
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
    int sum = 0;
    for(int i = 0;i < size;i++)
    {
        sum += array[i];
    }
    float average = sum / (float)size;
    printf("total sum of array elements = %d\n",sum);
    printf("average of elements in array = %.2f\n",average);
    return 0;
}