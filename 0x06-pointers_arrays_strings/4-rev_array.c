#include "main.h"

/**
 * reverse_array - A function that reverses an array
 * @a: array argument pointer
 * @n: length of array
 */

void reverse_array(int *a, int n)
{
	int i, rev;

	for (i = 0; i < n / 2; i++)
	{
		rev = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = rev;
	}
}
