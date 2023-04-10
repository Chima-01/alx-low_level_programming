#include "main.h"

/**
 * _strpbrk - This function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: parameter str
 * @accept: parameter being compared with s
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, c;

	while (s[i] != '\0')
	{
	for (c = 0; accept[c] != '\0'; c++)
	{
	if (s[i] == accept[c])
	{
		return (s + i);
	}
	if (accept[c] == '\0')
		return (s);
	}
		i++;
	}

		return ('\0');
}
