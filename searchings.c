#include "searchings.h"

int has_repeating_numbers(int *arr, int n)
{
    int count = 0;
    int key = 0;

    int i = 0;
    while (count < 2 && i < n)
    {
        count = 0;
        key = arr[i];

        int j = 0;
        while (count < 2 && j < n)
        {
            if (arr[j] == key)
                count += 1;

            j += 1;
        }

        i += 1;
    }
    
    return count == 2;
}

// return index of v or -1 if could not find.
int linear_search(int *arr, int n, int v)
{
    int i = -1;
    for (int j = 0; j < n; j++)
        if (arr[j] == v)
            i = j;

    return i;
}