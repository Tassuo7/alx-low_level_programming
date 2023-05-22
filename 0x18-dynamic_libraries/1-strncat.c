#include "main.h"
#include <string.h>
/**
 * *_strncat - a function that concatenates two strings
 * @dest: an input string
 * @src: an input string
 * @n: This is the maximum number of characters to be appended
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
