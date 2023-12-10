#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *p;
	int i, s;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	p = malloc(i * sizeof(*str) + 1);
	if (p == NULL)
		return (NULL);
	for (s = 0; s < i; s++)
		*(p + s) = *(str + s);
	*(p + s) = '\0';

	return (p);
}
