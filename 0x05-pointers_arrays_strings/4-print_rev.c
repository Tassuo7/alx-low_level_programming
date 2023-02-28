#include "main.h"
#include <string.h>
/**
 * print_rev - a function that prints a string, in reverse
 * @s: an input string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
