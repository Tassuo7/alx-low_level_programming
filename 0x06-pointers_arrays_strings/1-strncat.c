#include "main.h"
#include <string.h>
/**
 * *_strncat - a function that concatenates two strings again
 * @dest: a string
 * @src: a string
 * @n: it will use at most n bytes from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int lnstrng = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[lnstrng + i] = src[i];
	dest[lnstrng + i] = '\0';
	return (dest);
}
