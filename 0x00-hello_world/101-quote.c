#include <unistd.h>

/**
 * main - writes a C program that prints an exact output
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	write(2,
			"and that piece off art is useful\" - Dora Korpar, 2015-10-19\n",
			59);

	return (1);
}
