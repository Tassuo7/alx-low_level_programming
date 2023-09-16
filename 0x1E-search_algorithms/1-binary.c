#include "search_algos.h"

/**
 * print_array - Prints the array
 * @array: The array to be printed
 * @size: size of the array
 */

void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
		else
			printf("\n");
	}
}

/**
 * re_search - search the value
 * @array: The array to search in
 * @size: size of the array
 * @value: the value to be searched
 * Return: the index
 */

int re_search(int *array, size_t size, int value)
{
	size_t half = size / 2;

	if (half && size % 2 == 0)
		half--;
	print_array(array, size);

	if (array[half] == value)
		return (half);
	if (array[half] > value)
		return (re_search(array, half, value));
	half++;
	return (re_search(array + half, size - half, value) + half);
}

/**
 * binary_search - searches for a value in a sorted array
 * using the Binary search algorithm
 * @array: the first element of the array to search in
 * @size: the number of elements in array
 * @value: The value to search for
 * Return: The index or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL || size == 0)
		return (-1);
	idx = re_search(array, size, value);
	if (array[idx] != value)
		return (-1);
	return (idx);
}
