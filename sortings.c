#include "sortings.h"
#include "io.h"

void swap(int *pa, int *pb);

void bubble_sort(int *arr, int n)
{
    int key, j;
    for(int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            swap(&arr[j + 1], &arr[j]);
            j -= 1;
        }

        print_array(arr, n);
    }
}

void insertion_sort(int *arr, int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }

        arr[j + 1] = key;
    }
}

void swap(int *pa, int *pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}