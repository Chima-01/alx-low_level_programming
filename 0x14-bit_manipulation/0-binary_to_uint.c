#include "main.h"

/**
 * _strlen - This function checks the length of a str
 * @str: str parameter
 * Return: str length
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
		return (i);
}

/**
 * binary_to_uint - This function converts a binary
 * to decimal
 * @b: str parameter
 * Return: integer in base 10
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i, len, base = 1;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
			{
				dec += base;
			}
				base *= 2;
		}
		else
			return (0);
	}
		return (dec);
}
