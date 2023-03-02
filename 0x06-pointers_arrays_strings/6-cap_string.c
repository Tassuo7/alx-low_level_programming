#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @strng: a string.
 * Return: the pointer.
 */

char *cap_string(char *strng)
{
	int wrd = 0, i;
	int separ[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(strng + wrd) >= 97 && *(strng + wrd) <= 122)
		*(strng + wrd) -= 32;
	wrd++;
	while (*(strng + wrd) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(strng + wrd) == separ[i])
			{
				if ((*(strng + (wrd + 1)) >= 97) && (*(strng + (wrd + 1)) <= 122))
					*(strng + (wrd + 1)) = *(strng + (wrd + 1)) - 32;
				break;
			}
		}
		wrd++;
	}
	return (strng);
}
