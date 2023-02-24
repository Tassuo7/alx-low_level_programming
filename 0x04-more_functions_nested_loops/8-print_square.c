#include "main.h"
/**
 * print_square - Check description
 * Description: It a function that prints a square, followed by a new lin
 * @size: input number
 * Return: Always 0.
 */
void print_square(int size)
{
	int i, j;

	i = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
