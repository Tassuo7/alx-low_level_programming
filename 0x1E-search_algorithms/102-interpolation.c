#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array
 * using the Interpolation search algorithm
 * @array: the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: index of the number or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double pola;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;
	while (size)
	{
		pola = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + pola);
		printf("Value checked array[%d]", (int)pos);
		if (pos >= size)
		{
			printf(" is out of range\n");
			return (-1);
		}
		else
			printf(" = [%d]\n", array[pos]);
		if (array[pos] == value)
			return ((int)pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		if (low == high)
			return (-1);
	}
	return (-1);
}
