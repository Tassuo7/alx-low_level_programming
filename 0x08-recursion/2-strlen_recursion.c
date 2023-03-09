#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: An input string to printing
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int i;

	i = strlen(s);
	if (*s != '\0')
		return (i);
	else
		return (0);
}
