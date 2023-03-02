#include "main.h"

/**
 * reverse_array - a function that reverse the content of an array.
 * @a: an array
 * @n: number of elements of the array
 * Return: No return this time
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int salma;

	while (i < n--)
	{
		salma = a[i];
		a[i++] = a[n];
		a[n] = salma;
	}
}
