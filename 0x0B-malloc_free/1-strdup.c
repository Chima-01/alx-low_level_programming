#include "main.h"
#include <stdlib.h>

/**
 * _strdup - The _strdup() function returns a pointer to a new string which
 * is a duplicate of the string str
 * @str: parameter str to be copied
 * Return: a pointer to str (success)
 */

char *_strdup(char *str)
{
	int len = 0, i = 0;
	char *strcpy;

	while (str[len] != '\0')
	{
		len++;
	}

	strcpy = malloc((len + 1) * sizeof(char));

	if (strcpy == NULL)
		return (NULL);

	while (i < len)
	{
		strcpy[i] = str[i];
		i++;
	}

		return (strcpy);
}
