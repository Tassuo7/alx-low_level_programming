#ifndef _SEARCH_H_
#define _SEARCH_H_
#include <stddef.h>
#include <stdio.h>
#include <math.h>

int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#endif
