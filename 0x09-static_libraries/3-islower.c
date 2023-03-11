#include "main.h"
/**
 * _islower - Ceck description
 * @c: An input character
 * Description: It a function that checks for lowercase character.
 * Return: 0 if seccussful else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (0);
	}
	return (0);
}
