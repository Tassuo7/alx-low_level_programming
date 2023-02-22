#include "main.h"
/**
 * _islower - Ceck code
 *
 * @c: returned character
 * description : checks for lowercase character c
 *
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		{
		return (1);
		}

	return (0);
}
