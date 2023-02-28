#include "main.h"
#include <string.h>
/**
 * puts_half - it a function that prints half of a string.
 * @str: An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len;
	int i;

	len = strlen(str);
	for (i = (len + 1) / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
