#include <stdio.h>
/**
 * main - Entry point
 * Description:
 * Return: 0 if seccussful else 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
