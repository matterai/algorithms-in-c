#include "sortings.h"

void swap(int *pa, int *pb);

void bubble_sort(int *arr, int n)
{
    for(int j = 1; j < n; j++)
    {
        int key = arr[j];

        int i = j - 1;
        while (i >= 0 && arr[i] > key)
        {
            swap(&arr[i], &arr[i + 1]);
            i = i - 1;
        }
    }
}

void swap(int *pa, int *pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}