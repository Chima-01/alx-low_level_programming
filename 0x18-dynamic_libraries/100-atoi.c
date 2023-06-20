#include "main.h"

/**
 * _atoi - This program converts a string with an active ascii
 * value of an integer to int
 * @s: parameter string to be converted to int
 * Return: int (success)
 */

int _atoi(char *s)
{
	int i = 0, convert = 1, j = 0;
	unsigned int result = 0;

	while (s[i])
	{
	if (s[i] == '-')
	{
		convert *= -1;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		j = 1;
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	if (j == 1)
	{
		break;
	}

		i++;
	}
		result *= convert;
		return (result);
}
