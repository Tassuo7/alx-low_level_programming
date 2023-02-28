#include <string.h>
#include "main.h"
/**
 * rev_string - a function that reverse a string
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len;
	int rev;
	int salma;

	len = strlen(s);
	salma = 0;
	while (salma < len--)
	{
		rev = s[salma];
		s[salma++] = s[len];
		s[len] = rev;
	}
}
