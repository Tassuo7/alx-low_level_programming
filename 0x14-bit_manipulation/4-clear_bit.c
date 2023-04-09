#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: unsigned long int.
 * @index: is the index.
 *
 * Return: 1 if it worked, -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int c;

	if (index > 63)
		return (-1);

	c = 1 << index;

	if (*n & c)
		*n ^= c;

	return (1);
}
