#include "main.h"
/**
 * print_sign - Check description
 * Description: It a function that prints the sign of a number
 * @n: An input number
 * Return: 0 if seccussful else 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
