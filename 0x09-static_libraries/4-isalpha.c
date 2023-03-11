#include "main.h"
/**
 * _isalpha - Ceck description
 * Description: It a function that checks alphabetic character.
 * @c: An input character
 * Return: 0 if seccussful else 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
