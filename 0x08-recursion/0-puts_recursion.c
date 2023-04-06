#include "main.h"

/**
 * _puts_recursion - This function return a string to stdout
 * @s: pointer parameter of the _puts function
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

		_putchar(*s);
		_puts_recursion(s + 1);
}
