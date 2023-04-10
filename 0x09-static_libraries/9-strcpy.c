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
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
		dest[i++] = '\0';
		return (dest);
}
