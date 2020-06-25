#include <stdio.h>
#include "io.h"

void print_array(int *arr, int n)
{
    printf("\t");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    printf("\n");
}