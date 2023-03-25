#include "main.h"

/**
 * Description: print_line - This function prints underscores_
 * according to the argument given when the function is called
 * @n: parameter given
 * Return: 0 success
 */

void print_line(int n)
{
	int sym = 1;

	while (sym <= n)
	{
		_putchar('_');
		sym++;
	}

		_putchar('\n');
}
