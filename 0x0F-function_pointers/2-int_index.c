#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - This function compares searches for an interger
 * @array: array passed to be compared
 * @size: size of array
 * @cmp: function pointer to compare values
 * Return:  index of the first element for which the cmp function
 * does not return 0 (success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
		return (-1);
}
