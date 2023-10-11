#ifndef search
#define search
#include <stddef.h>
#include "stdio.h"
#include "stdlib.h"

int jump_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif
