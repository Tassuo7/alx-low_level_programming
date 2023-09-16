#include "search_algos.h"

/**
 * jump_search -  searches for a value in a sorted array
 * using the Jump search algorithm
 * @array: the first element of the array to search in
 * @size: Number of elements in array
 * @value: The value to search for
 * Return: The index or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), deb = 0, lim;
	int idx = 0;

	if (array == NULL)
		return (-1);
	while (array[jump] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", deb, array[deb]);
		deb = jump;
		jump += jump;
		if (deb >= size)
			return (-1);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", deb, jump);
	if (jump > size)
		jump = size;
	for (int i = deb; i <= jump || idx == i; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			idx = i;
	}
	if (idx = i)
	{
		printf("Found %d at index: %d\n", value, idx);
		return (idx);
	}
	else
	{
		printf("Found %d at index: -1\n", value);
		return (-1);
	}
}
