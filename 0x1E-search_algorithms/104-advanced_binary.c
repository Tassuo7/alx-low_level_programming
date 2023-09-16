#include "search_algos.h"

/**
 * re_search - searches for a value in an array
 * using the Binary search algorithm
 * @array: the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: index or -1
 */
int re_search(int *array, size_t size, int value)
{
	size_t half = size / 2, i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");
	if (half && size % 2 == 0)
		half--;
	if (value == array[half])
	{
		if (half > 0)
			return (re_search(array, half + 1, value));
		return ((int)half);
	}
	if (value < array[half])
		return (re_search(array, half + 1, value));
	half++;
	return (re_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - searches for a value in an array
 * using the Binary search algorithm
 * @array: the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: index or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int idx;

	idx = re_search(array, size, value);
	if (idx >= 0 && array[idx] != value)
		return (-1);
	return (idx);
}
