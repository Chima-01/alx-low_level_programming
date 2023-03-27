#include "main.h"

/**
 * swap_int - A function that displays swaps values of an argument
 * @a: first parameter given
 * @b: second parameter
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

}
