#include "main.h"
#include <string.h>

/**
 * puts2 - This function prints the factors of 2
 * starting from 0
 * @str: parameter given
 */

void puts2(char *str)
{
	int len = strlen(str);
	int a;

	for (a = 0; a < len; (a = a + 2))
	{
		_putchar(str[a]);
	}
		_putchar('\n');
}
