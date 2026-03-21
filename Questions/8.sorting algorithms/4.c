/* 4. Modify Bubble Sort to sort elements in descending order. */
#include <stdio.h>
void bubble_sort(int array[],int size)
{
    int temp;
    for(int i = 0;i < size - 1;i++)
    {
        for(int j = 0;j < size - i - 1;j++)
        {
            if(array[j] >= array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void reverse(int array[],int size)
{
    int temp;
    for(int i = 0;i < size/2;i++)
    {
        temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
}
int main()
{
    int array[50];
    int size;
    printf("enter size of array :");
    scanf("%d",&size);
    for(int i = 0;i < size;i++)
    {
        printf("enter element %d :",i+1);
        scanf("%d",&array[i]);
    }
    bubble_sort(array,size);
    printf("sorted array (ascending order) :\n");
    for(int i = 0;i < size;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    printf("sorted array (descending order) :\n");
    reverse(array,size);
    for(int i = 0;i < size;i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}