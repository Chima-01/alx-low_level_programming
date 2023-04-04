#include "main.h"

/**
 * _strchr - This function locates a character in
 * a string
 * @s: parameter which represent for char to be searches
 * @c: The parameter of char to be searched
 * Return: a pointer (success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	/*char *p;*/

	while (s[i] != '\0')
	{
	if (s[i] == c)
	{
		return (s + i);
	}
		i++;
	}
	if (c == ' ')
		return (s);
	else 
		return ('\0');
}
