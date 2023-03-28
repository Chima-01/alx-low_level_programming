#include "main.h"
#include <string.h>

/**
 * print_rev - This displays a string on reversal mode
 * @s: parameter of the function
 * Return: reverse string (success)
 */

void print_rev(char *s)
{
	int a = strlen(s);
	int rev;

	for (rev = a - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
		_putchar('\n');
}
