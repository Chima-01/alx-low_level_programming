#include "main.h"

/**
 * _memset - This function replaces the content of a given buffer
 * with a given argument
 * substitution is restricted to the n num given
 * @s: The parameter pointing to buffer
 * @b: parameter to substitute a given buffer content with
 * @n: the limitation to the substitution that can be done
 * Return: pointer (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *c;

	c = &b;

	for (i = 0; i < n; i++)
	{
		s[i] = *c;
	}
		return (s);
}
