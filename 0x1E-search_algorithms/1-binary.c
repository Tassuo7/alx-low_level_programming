#include "search_algos.h"

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
	size_t first = 0, last = size - 1, half, i;

	if (!array || size == 0)
		return (-1);

	while (first <= last)
	{
		printf("Searching in array: ");
		for (i = 0; i < size; i++)
		{
			printf("%d", array[i]);
			if (i < size - 1)
				printf(", ");
			else
				printf("\n");
		}
		half = first + (last - first) / 2;
		if (array[half] == value)
			return (half);
		if (array[half] < value)
			first = half + 1;
		else
			last = half - 1;
		aray = array + first;
		size = last - first + 1;
	}

	return (-1);
}
