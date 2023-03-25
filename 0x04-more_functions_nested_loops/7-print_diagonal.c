#include "main.h"

/**
 * print_diagonal - This function print diagonal lines
 * @n: The parameter given
 * Return: 0 (success)
 */

void print_diagonal(int n)
{
	int i = 1;

	while (i <= n)
	{
		int b = 1;

	while (b < i)
	{
		_putchar(' ');
		b++;
	}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
