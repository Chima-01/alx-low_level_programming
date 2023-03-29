#include "main.h"

/**
 * _strcat - This function concatenates two pointer arguments
 * @dest: destination the concated strings
 * @src: parameter source to be added to dest
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *str;
	int i = 0;

	while (dest[i] != '\0')
	{
		str = (dest + i);
		i++;
	}
		i = 0;
	while (src[i] != '\0')
	{
		str = (src + i);
		i++;
	}
		str = '\0';

		return (str);
}

