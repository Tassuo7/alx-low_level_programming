#include "main.h"
#include <string.h>
/**
 * _puts - Write a function that prints a string.
 * @str: an input string
 */
void _puts(char *str)
{
	int i;
	int len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
