#include "main.h"
#include <stdio.h>

/**
 * _memset - This function replaces the content of a given buffer
 * with a given argument
 * Replacing is restricted to the n-byte given
 * @s: The argument buffer
 * @b: argument to substitute a given buffer content with
 * @n: the limitation to the replacement that can be done
 * Return: pointer (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0, i;
	char *c;

	c = &b;
	while (s[j] == '\0')
	{
		j++;
	}
		j = 0;
	for (i = 0; i < n; i++)
	{
		s[j] = *c;
		j++;
	}
		s[i] = '\0';
		return (s);
}
