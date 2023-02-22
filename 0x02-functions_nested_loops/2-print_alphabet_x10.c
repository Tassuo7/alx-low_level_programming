#include "main.h"
/**
 * main : check code
 *
 * description : describe it
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char c;
	int n = 0;

	while (n < 10)
		{
		for (c = 'a'; c <= 'z'; c++)
			{
			_putchar(c);
			}
		_putchar('\n');
		n++;
		}
}
