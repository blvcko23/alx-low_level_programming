#include <stdio.h>

/**
 * main - a printf function
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int i;

	for (n = 0 ; n < 9; n++)
	{
		i = n + 1;
		do {
			putchar('0' + n);
			putchar('0' + i);
			if (n < 8)
			{
				putchar(',');
				putchar(32);
			}
			i++;
		} while (i < 10);
	}
	putchar('\n');
	return (0);
}
