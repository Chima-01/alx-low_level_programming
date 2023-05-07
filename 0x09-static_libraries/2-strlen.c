#include "main.h"

/**
 * _strlen - This function dispalys the length of
 * a string
 * @s: parameter given
 * Return: length;
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
