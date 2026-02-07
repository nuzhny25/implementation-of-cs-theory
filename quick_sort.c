#include <stdio.h>
#include <time.h>
#include "partition.c"

void print_list(int list[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", list[i]);
    }
    puts("\n");
}

void quicksort(int arr[], int size)
{
    if (size > 1)
    {
        int k = partition(arr, size);
        quicksort(arr, k);
        quicksort(&arr[k + 1], size - k - 1);
    }
}

int main()
{
    int list1[100] = {10, 68, 72, 5, 25, 62, 8, 87, 77, 17, 10, 18, 45, 45, 34, 24, 39, 30, 46, 92, 96, 13, 45, 73, 15, 40, 55, 98, 21, 34, 50, 83, 25, 23, 90, 23, 18, 99, 50, 53, 53, 100, 82, 66, 33, 54, 4, 31, 41, 36, 49, 41, 100, 72, 39, 9, 46, 70, 50, 50, 70, 16, 86, 17, 16, 94, 86, 92, 67, 9, 32, 60, 72, 35, 68, 67, 1, 41, 38, 52, 93, 4, 46, 55, 39, 65, 65, 70, 27, 81, 36, 57, 15, 95, 6, 75, 21, 79, 47, 68};
    int index1 = 100;

    print_list(list1, index1);

    clock_t start_t = clock();
    quicksort(list1, index1);
    clock_t end_t = clock();

    print_list(list1, index1);

    double total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    printf("Total time taken by CPU to perform quick sort: %f seconds\n", total_t);

    start_t = clock();
    quicksort(list1, index1);
    end_t = clock();

    print_list(list1, index1);

    total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    printf("Total time taken by CPU to perform quick sort for worst case: %f seconds", total_t);

    return 0;
}