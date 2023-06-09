#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - This function executes a function given
 * as a parameter on each element of an array.
 * @array: array to be printed
 * @size: size of array
 * @action: function pointer to array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
