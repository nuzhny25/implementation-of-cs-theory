#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void merge(int l1[], int l2[], int outputList[], int l1_index, int l2_index)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int output[l1_index + l2_index];
    while((i < l1_index) && (j < l2_index))
    {
        if(l1[i] <= l2[j])
        {
            output[k++] = l1[i++];
        }
        else
        {
            output[k++] = l2[j++];
        }
    }

    while(i < l1_index)
    {
        output[k++] = l1[i++];
    }

    while(j < l2_index)
    {
        output[k++] = l2[j++];
    }

    int l = 0;

    while(l < k)
    {
        outputList[l] = output[l];
        l++;
    }

}

void print_list(int list[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", list[i]);
    }
    puts("\n");
}

void mergesort1(int list[], int start, int finish)
{
    if(start < finish)
    {
        int mid = start + (finish - start) / 2;
        mergesort1(list, start, mid);
        mergesort1(list, mid + 1, finish);
        merge(&list[start], &list[mid+1], &list[start], mid - start + 1, finish - mid);
    }
}

int main()
{
    int list1[100] = {10, 68, 72, 5, 25, 62, 8, 87, 77, 17, 10, 18, 45, 45, 34, 24, 39, 30, 46, 92, 96, 13, 45, 73, 15, 40, 55, 98, 21, 34, 50, 83, 25, 23, 90, 23, 18, 99, 50, 53, 53, 100, 82, 66, 33, 54, 4, 31, 41, 36, 49, 41, 100, 72, 39, 9, 46, 70, 50, 50, 70, 16, 86, 17, 16, 94, 86, 92, 67, 9, 32, 60, 72, 35, 68, 67, 1, 41, 38, 52, 93, 4, 46, 55, 39, 65, 65, 70, 27, 81, 36, 57, 15, 95, 6, 75, 21, 79, 47, 68};
    int index1 = 100;

    print_list(list1, index1);

    clock_t start_t = clock();
    mergesort1(list1, 0, 99);
    clock_t end_t = clock();

    print_list(list1, index1);

    double total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;

    printf("Total time taken by CPU to perform merge sort: %f seconds", total_t);

    return 0;
}