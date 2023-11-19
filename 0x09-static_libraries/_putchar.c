#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
