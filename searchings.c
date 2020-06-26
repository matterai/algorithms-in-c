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