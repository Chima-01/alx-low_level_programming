#include "main.h"
#include <stdlib.h>

/**
 * _memset - memory is filled with a particular byte
 * @s: memory area to allocate char
 * @b: char to be copied
 * @n: number times char is to be copied
 * Return: pointer to memory s (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
		return (s);
}

/**
 * _calloc - This The _calloc function allocates memory for an array of nmemb
 * elements of size bytes each and returns a pointer to the allocated memory.
 * @nmemb: First parametr for number of elements
 * @size: size of elements type
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr =  malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
