#include "main.h"
/**
 * _isalpha - Ceck description
 * Description: It a function that checks alphabetic character.
 * @c: An input character
 * Return: 0 if seccussful else 0
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		{
		return (1);
		}

	return (0);
}
