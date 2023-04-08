#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unit = 0;
	int prcr, pwr;

	if (!b)
		return (0);

	for (prcr = 0 ; b[prcr] != '\0' ; prcr++)
	{
		if (b[prcr] != '0' && b[prcr] != '1')
		return (0);
	}

	for (pwr = 1 ; prcr >= 0 ; prcr--)
	{
		if (b[prcr] == '1')
			unit += b[prcr] * pwr;
		pwr *= 2;
	}

	return (unit);
}
