#include <stdio.h>
#include "main.h"

/**
 * main - print the number of  arguments past to the program
 * @argc: number of arguments
 * @argv: array of argument
 * Return: Always 0 (sucess)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
