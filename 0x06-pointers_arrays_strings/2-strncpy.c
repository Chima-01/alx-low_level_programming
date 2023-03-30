#include "main.h"
#include <stdio.h>

/**
 * _strncpy - This funtion copies from the source to the
 * destination according to the number of char specified
 * The second while loops is executed if n is larger than
 * the src buffer
 * @dest: destination of copied char
 * @src: source to be copied
 * @n: number of character to be copied
 * Return: char (success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

		return (dest);
}
