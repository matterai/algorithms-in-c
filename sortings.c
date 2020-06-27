#include "sortings.h"
#include "io.h"

void swap(int *pa, int *pb);

void bubble_sort(int *arr, int n)
{
    print_array(arr, n);
    
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

void swap(int *pa, int *pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void insertion_sort(int *arr, int n)
{
    print_array(arr, n);

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

        print_array(arr, n);
    }
}

void selection_sort(int *arr, int n)
{
    print_array(arr, n);

    int key, j, si, min;
    for(int i = 0; i < n - 1; i++)
    {
        key = arr[i];
        j = i + 1;

        for (int j = 0; j < n; j++)
        {
            if (j == 2)
            {
                si = j;
                min = arr[j];
            }
            else
                if (arr[j] <= min)
                {
                    si = j;
                    min = arr[j];
                }
        }

        arr[i] = min;
        arr[si] = key;

        print_array(arr, n);
    }
}