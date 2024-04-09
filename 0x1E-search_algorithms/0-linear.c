#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches the array
 * value - number to search for
 * 
 * return - success always
 */

int linear_search(int *a, size_t n, int value);
int linear_search(int *a, size_t n, int value) {
    size_t i;

    for (i = 0; i < n; i++) {
        if (a[i] == value) {
            return i;
        }
    }

    return -1;
}

