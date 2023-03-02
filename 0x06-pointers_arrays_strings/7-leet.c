#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @strng: a string
 * Return: the encoded string
 */
char *leet(char *strng)
{
	int i = 0, j = 0;
	char codes[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'},
	char s[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	while (strng[j])
	{
		for (i = 0; i < 10; i++)
			if (strng[j] == s[i])
				strng[j] = codes[i];

		j++;
	}

	return (strng);
}
