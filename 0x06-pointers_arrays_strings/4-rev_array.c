#include "main.h"


/**
 * reverse_array - reverse array of int
 * @a: array
 * @n: number of elements of array
 *
 * Retrun: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
