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
	int j = (int)sqrt((double)size), jump = 0, deb = 0, i = 0;

	if (array == NULL)
		return (-1);
	do
	{
		printf("Value checked array[%u] = [%d]\n", deb, array[jump]);
		if (array[jump] == value)
			return (jump);
		i++;
		deb = jump;
		jump = i * j;
	} while (array[jump] < value && jump < (int)size);
	printf("Value found between indexes [%u] and [%u]\n", deb, jump);

	for (; deb <= jump && deb < (int)size; deb++)
	{
		printf("Value checked array[%u] = [%d]\n", deb, array[deb]);
		if (array[deb] == value)
			return (deb);
	}
	return (-1);
}
