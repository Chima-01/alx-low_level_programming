#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - This function concatenated str1 and add str2
 * according to the size of n
 * @s1: first str parameter
 * @s2: second str parameter
 * @n: number of charracters to be copied from str2
 * Return: newly allocated space in memory of s1 and n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	unsigned int j;
	char *strncat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	strncat = malloc((i + n + 1) * sizeof(char));
	if (strncat == NULL)
	{
		return (NULL);
	}
		i = 0;
	while (s1[i] != '\0')
	{
		strncat[i] = s1[i];
		i++;
	}
	for (j = 0; j < n; j++)
	{
		strncat[i] = s2[j];
		i++;
	}
		return (strncat);
}
