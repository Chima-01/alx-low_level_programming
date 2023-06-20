#include "main.h"

/**
 * *_strcpy - The function copies an input from a string
 * to another
 * @dest: destination of copied str
 * @src: source to copy
 * Return: Str (success)
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (src[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
		dest[j] = '\0';
		return (dest);
}
