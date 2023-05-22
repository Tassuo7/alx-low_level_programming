#include "main.h"
/**
 * _abs - Check description
 * @n: An input number
 * Description: It a function that computes the absolute value of an integer
 * Return: 0 if seccussful else 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n = (-1) * n);
	}
	else
		return (n);
}
