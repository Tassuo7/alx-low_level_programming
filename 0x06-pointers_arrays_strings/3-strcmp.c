#include "main.h"
/**
 * _strcmp - a function that compares two strings 3awtani.
 * @s1: a string
 * @s2: a string
 * Return: shows s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
