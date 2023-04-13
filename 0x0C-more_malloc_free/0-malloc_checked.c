#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - This function return a pointer to an
 * allocated memory
 * @b: parameter to return memory address
 * Return: memory address (success)
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
