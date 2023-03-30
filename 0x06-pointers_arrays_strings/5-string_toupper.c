#include "main.h"

/**
 * string_toupper - This function converts all letters in a
 * string from lower to uppercase
 * @s: parameter passed
 * Return: char to uppercase (success)
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
	}
		i++;
	}
		s[i] = '\0';
		return (s);
}
