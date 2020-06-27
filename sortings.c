#include "sortings.h"
#include "io.h"

#define INT_MIN -2147483648

void swap(int *pa, int *pb);
void merge(int *arr, int p, int q, int r);

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
        
        for (int j = i; j < n; j++)
        {
            if (j == i)
            {
                si = j;
                min = arr[j];
            }
            else
            {
                if (arr[j] < min)
                {
                    si = j;
                    min = arr[j];
                }
            }

        }

        arr[i] = min;
        arr[si] = key;

        print_array(arr, n);
    }
}

void merge_sort(int *arr, int p, int r)
{
    if (p < r)
    {
        int q = (p + r)/2;
        
        merge_sort(arr, p, q);
        merge_sort(arr, q + 1, r);
        
        merge(arr, p, q, r);
    }
}

void merge(int *arr, int p, int q, int r)
{
    int i, j, k;

    int n1 = q - p + 1;
    int n2 = r - q;
    
    int left[n1], right[n2];

    for(i = 0; i < n1; i++)
        left[i] = arr[p + i];
    
    for(j = 0; j < n2; j++)
        right[j] = arr[q + 1 + j];

    i = 0; j = 0; k = p;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        } 
        else 
        {
            arr[k] = right[j];
            j++;
        }

        k++;
    }
    
    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}