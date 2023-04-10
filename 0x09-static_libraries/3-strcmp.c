#include "main.h"

/**
 * _strcmp - This function compares two arguments and return
 * the difference
 * @s1: first parameter pointer
 * @s2: second parameter pointer
 * Return: 0 (success)
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
		diff = s1[i] - s2[i];
		return (diff);
}
