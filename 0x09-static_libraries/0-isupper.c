#include "main.h"
/**
 * _isupper - Ceck description
 * Description: It a function that checks for uppercase character
 * @c: input character
 * Return: 0 if seccussful else 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (0);
	return (0);
}
