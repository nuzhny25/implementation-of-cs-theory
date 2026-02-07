#include <stdio.h>

void swap(int * num1, int * num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int partition(int arr[], int size)
{

    int pivot = arr[size - 1];
    int i = 0;
    if(size > 1)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if (arr[j] <= pivot)
            {
                swap(&arr[j], &arr[i]);
                i++;
            }
        }
    }
    swap(&arr[i], &arr[size - 1]);
    
    return i;
}

int select_partition(int arr[], int size, int position)
{
    int pivot = arr[position];
    swap(&arr[position], &arr[size - 1]);
    int i = 0;
    if(size > 1)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if (arr[j] <= pivot)
            {
                swap(&arr[j], &arr[i]);
                i++;
            }
        }
    }
    swap(&arr[i], &arr[size - 1]);
    
    return i;
}

