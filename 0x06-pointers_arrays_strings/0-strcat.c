#include "main.h"
#include <string.h>
/**
 * *_strcat - a function that concatenates two strings
 * @dest: a string
 * @src: a string
 * Return: Returns pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int lnstrng1;
	int lnstrng2;

	lnstrng1 = strlen(dest);
	lnstrng2 = strlen(src);
	for (i = 0; i <= lnstrng2; i++)
	{
		dest[lnstrng1 + i] = src[i];
	}
	return (dest);
}
