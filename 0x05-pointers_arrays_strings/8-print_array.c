#include "main.h"

/**
 * print_array - This function print the values of an
 * array
 * @a: a pointer parameter
 * @n: a parameter
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] < a[n]; i++)
	{
	if (i != n - 1)
	{
		printf("%d,", a[i]);
	}
	else
	{
		printf("%d", a[i]);
	}
	}
		printf("\n");
}
