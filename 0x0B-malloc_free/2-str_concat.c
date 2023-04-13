#include "main.h"
#include <stdlib.h>

/**
 * str_concat - This function concatats two strings
 * @s1: first parameter str
 * @s2: second parameter str
 * Return: concated str (success)
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *strcat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	strcat = malloc((i + j + 1) * sizeof(char));
	if (strcat == NULL)
	{
		return (NULL);
	}
	i = 0, j = 0;
	while (s1[i] != '\0')
	{
		strcat[i] = s1[i];
			i++;
	}
	while (s2[j] != '\0')
	{
		strcat[i] = s2[j];
			i++;
			j++;
	}
		strcat[i] = '\0';
		return (strcat);
}
