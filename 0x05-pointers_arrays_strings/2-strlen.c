#include "main.h"

/**
 * _strlen - determines the length of as string
 * @s: string
 * Return: length
 */
int _srtlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
