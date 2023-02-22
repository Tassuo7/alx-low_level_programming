#include "main.h"
/**
 * print_alphabet - check description
 *
 * description : prints the alphabet, in lowercase, followed by a new line
 *
 * Return always 0
 */
void print_alphabet(void)
{
	char lowaz;

	for (lowaz = 'a'; lowaz <= 'z'; lowaz++)
		{
		_putchar(lowaz);
		}
	_putchar('\n');
}
