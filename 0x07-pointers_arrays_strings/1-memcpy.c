#include "main.h"

/**
 * _memcpy - This function copies a num of character from a src
 * to dest
 * @dest: destination of the copied character
 * @src: source where char will be copied
 * @n: restriction to the num of char that can be copied
 * Return: char pointer (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (src[i] == '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
		return (dest);
}
