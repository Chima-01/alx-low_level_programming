#include "main.h"
#include <string.h>

/**
 * puts_half - A function that displays the last half
 * of a string
 * @str: Parameter given
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int i;

	if (len % 2 != 0)
	{
	for (i = (len - 1) / 2; i <= len; i++)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
	}
	else if (len % 2 == 0)
	{
	for (i = len / 2; i <= len; i++)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
	}
}

