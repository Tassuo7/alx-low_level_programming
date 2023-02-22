#include "main.h"
/*
 * main - Ceck code
 *
 * description : describe it
 *
 * Return: always 0
 */
int _islower(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		{
		return (1);
		}
	
	return (0);
}
