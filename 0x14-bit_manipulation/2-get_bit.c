#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long int.
 * @index: is the index.
 *
 * Return: value of the bit at index or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0)
		return (0);

	for (i = 0; i <= 63; i++)
	{
		if (index == i)
			return (1);
	}

	return (-1);
}
