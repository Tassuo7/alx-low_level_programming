#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print whether the number; zero, positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	printf("%i is positive\n", n);
	if (n == 0)
	printf("%i is zero\n", n);
	if (n < 0)
	printf("%i is negative\n", n);

	return (0);
}
