#include "main.h"

/**
 * is_palindrome - This function checks
 * if a string is a palindrome
 * @s: str passed
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len < 2)
	{
		return (1);
	}
	else if (s[0] == s[len - 1])
	{
		s[len - 1] = '\0';
		return (is_palindrome(&s[1]));
	}
	else
		return (0);
}
