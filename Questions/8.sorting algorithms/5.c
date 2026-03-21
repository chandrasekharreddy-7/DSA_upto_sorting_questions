/* 5. Trace Bubble sort for the array: 5, 3 , 8, 4, 2 */
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
int main()
{
    int array[5] = {5, 3, 8, 4, 2};
    int size = 5;
    bubble_sort(array,size);
    printf("sorted array :\n");
    for(int i = 0;i < size;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    return 0;
}