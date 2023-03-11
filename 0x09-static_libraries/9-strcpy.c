#include "main.h"
#include <string.h>
/**
 * *_strcpy - Check description
 * Description: it a function that copies the string pointed to by src,
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	dest = strcpy(dest, src);
	return (dest);

}
