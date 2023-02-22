#include "main.h"
/**
 * print_last_digit- Check description
 * Description: It  a function that prints the last digit of a number.
 * @n: An input number
 * Return: 0 if seccussful else 0
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (n < 0)
		digit = -1 * (n % 10);
	_putchar(digit + '0');
	return (digit);
}
