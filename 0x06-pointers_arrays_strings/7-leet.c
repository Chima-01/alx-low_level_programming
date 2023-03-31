#include "main.h"

/**
 * leet - This function gives certain characters a code number
 * @m: parameter pointer
 * Return: char (success)
 */

char *leet(char *m)
{
	char alpha[10] = "aAeEoOtTlL";
	char num[10] = "4433007711";
	int i = 0, c;

	while (m[i] != '\0')
	{
	for (c = 0; c < 10; c++)
	{
	if (m[i] == alpha[c])
	{
		m[i] = num[c];
	}
	}
		i++;
	}
		return (m);
}

