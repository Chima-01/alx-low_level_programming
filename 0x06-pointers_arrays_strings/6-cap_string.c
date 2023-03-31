#include "main.h"

/**
 *  cap_string - This function capitalize ythe first letter of words
 *  in a string
 *  @c: parameter given for function
 *  Return: char (success)
 */

char *cap_string(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
	if (c[0] >= 'a' && c[0] <= 'z')
	{
		c[0] = c[0] - 32;
	}
	else if (c[i] == ',' || c[i] == ';' || c[i] == '.' ||
	c[i] == '!' || c[i] == '?' || c[i] == '"' || c[i] == '('
	|| c[i] == ')' || c[i] == '{' || c[i] == '}' || c[i] == ' '
	|| c[i] == '\t' || c[i] == '\n')
	{
		if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
		{
			c[i + 1] = c[i + 1] - 32;
		}
	}
		i++;
	}
		return (c);
}
