#include "io.h"
#include "sortings.h"
#include "searchings.h"

#define ARRAY_SIZE 10

static int arr [ARRAY_SIZE] = { 5, 7, 1, 2, 9, 4, 0, 7, 1, 3 };

int main(int argc, char const *argv[])
{
    // print_array(arr, ARRAY_SIZE);
    // insertion_sort(arr, ARRAY_SIZE);
    // print_array(arr, ARRAY_SIZE);

    print_array(arr, ARRAY_SIZE);
    int has = has_repeating_numbers(arr, ARRAY_SIZE);
    printf("sequence has repeating numbers: %d\n", has);

    return 0;
}
