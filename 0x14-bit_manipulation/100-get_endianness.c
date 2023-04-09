#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n = 1;
	char *end = (char *) &n;
	
	if (*end == 0)
		return (0);
	else
		return (1);
}
