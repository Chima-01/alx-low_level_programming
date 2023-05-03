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
		int result;
		char *str = malloc(len);

		if (str == NULL)
		{
			return (0);
		}
		strcpy(str, &s[1]);
		str[len - 2] = '\0';
		result = is_palindrome(str);
		free(str);
		return (result);
	}
	else
		return (0);
}
