#include "main.h"

/**
 * _strspn - This function the returns the length str1
 * That can be found in str2
 * @s: The first parameter
 * @accept: The string being compared
 * Return: number of byte in s which can be found in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int i = 0, c;

	while (s[i] != '\0')
	{
	for (c = 0; accept[c] != '\0'; c++)
	{
	if (accept[c] == s[i])
	{
		a++;
		break;
	}
	else if (accept[c] == '\0')
		return (a);
	}
		i++;
	}
		return (a);
}
