#include "main.h"

/**
 * flip_bits - flip numbers to get from one number to another
 * @n: first number.
 * @m: second number.
 *
 * Return: the number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nob;

	for (nob = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nob++;
	}

	return (nob);
}
