#include "main.h"
#include <stdlib.h>

/**
 * array_range - contains values from mim to max
 * @min: minimum value
 * @maxx: maximum value
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, range;
	int *ptr;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;

	ptr = malloc(sizeof(int) * (range));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min < max; i++)
	{
		ptr[i] = min;
		++min;
	}
		return (ptr);
}
