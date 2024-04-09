#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *a, size_t n, int value) {
    size_t i;

    for (i = 0; i < n; i++) {
        if (a[i] == value) {
            return i;
        }
    }

    return -1;
}

#endif
