#include <stdio.h>

/**
 * main - a function that prints out an output
 *
 * Return: 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
