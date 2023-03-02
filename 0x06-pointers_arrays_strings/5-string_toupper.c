#include "main.h"
#include <string.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @ptrs: pointer to string
 * Return: pointer to the string
 */
char *string_toupper(char *ptrs)
{
	int lnstrng;
	int i;

	lnstrng = strlen(ptrs);
	for (i = 0; i < lnstrng; i++)
	{
		if (ptrs[i] >= 97 && ptrs[i] <= 122)
			ptrs[i] -= 32;
	}
	return (ptrs);
}
