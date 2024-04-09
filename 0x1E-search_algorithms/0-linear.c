#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - entry
 * linear_search - searches the array
 * value - number to search for
 * 
 * return - success always
 */

int linear_search(int *a, size_t n, int value);

int main(void) {
    int a[] = {5, 6, 9, 8};
    size_t n = sizeof(a) / sizeof(a[0]);
    int value = 9;

    int index = linear_search(a, n, value);
    if (index != -1) {
        printf("The number is at index %d\n", index);
    } else {
        printf("The number is not found\n");
    }

    return EXIT_SUCCESS;
}
