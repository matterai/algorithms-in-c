#include "io.h"
#include "sortings.h"
#include "searchings.h"

#define ARRAY_SIZE 8

static int arr [ARRAY_SIZE] = { 5, 7, 1, 2, 9, 4, 1, 0, 3 };

int main(int argc, char const *argv[])
{
    // bubble_sort(arr, ARRAY_SIZE);
    // insertion_sort(arr, ARRAY_SIZE);
    selection_sort(arr, ARRAY_SIZE);

    // int has = has_repeating_numbers(arr, ARRAY_SIZE);
    // printf("sequence has repeating numbers: %d\n", has);

    // int index = linear_search(arr, ARRAY_SIZE, 12);
    // printf("index of searching element: %d\n", index);

    return 0;
}
