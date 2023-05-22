#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: an input string to search in
 * @c: an input character to locate into string s
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return ('\0');
}
