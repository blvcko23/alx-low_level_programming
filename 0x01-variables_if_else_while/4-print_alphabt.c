#include <stdio.h>

/**
 * main - a printf function
 *
 * Return: 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if ((c == 'q' || c == 'e') != 1)
		{
		putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
