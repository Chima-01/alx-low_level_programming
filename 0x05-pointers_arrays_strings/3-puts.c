#include "main.h"

/**
 * _puts - This function returns the strings in a var
 * @s: parameter given for str
 * Return: 0
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
		_putchar('\n');
}
