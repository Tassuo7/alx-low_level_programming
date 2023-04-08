#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 *
 * Return: walo
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		if (n >> 0)
			_putchar('1');
		else
		{
			if (n >> 1)
				print_binary(n >> 1);
			_putchar(n & 1);
			_putchar('0');
	}

}
