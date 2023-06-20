#include "main.h"

/**
 * _strncat - This function appends a string to n char long
 * acccording to argument passed
 * @dest: destination parameter
 * @src: source parameter to concat
 * @n: represent the number of char to be printed
 * Return: char (success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && (src[j] != '\0'); j++, i++)
	{
		dest[i] = src[j];
	}
		dest[i] = '\0';
		return (dest);
}
