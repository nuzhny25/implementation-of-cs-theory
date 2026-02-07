#include <stdio.h>
#include "partition.c"


int select(int arr[], int size, int index)
{
    int j = ApproxMedian(arr, size);
    int k = select_partition(arr, size, j);
    if (k == index)
    {
        return arr[k];
    }
    else if (k > index)
    {
        return select(arr, k-1, index);
    }
    else
    {
        return select(&arr[k + 1], size - k, index - k);
    }
}