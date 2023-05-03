#include "main.h"
#include <stdlib.h>

/**
 * _realloc - This function that reallocates a memory block using
 * malloc and free
 * @ptr: Allocated memory for old and new size
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes of the new memory block
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *p = ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

if (ptr == NULL)
{
	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
	{
		return (NULL);
	}
	free(ptr);
	return (ptr1);
}
if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}
ptr1 = malloc(new_size);
if (ptr1 == NULL)
	return (NULL);

if (new_size > old_size)
	for (i = 0; i < old_size; i++)
	{
		ptr1[i] = p[i];
	}
		free(ptr);
		return (ptr1);

}
