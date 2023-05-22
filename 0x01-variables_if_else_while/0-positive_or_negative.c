#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a function that prints out an output
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 10)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 10)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
