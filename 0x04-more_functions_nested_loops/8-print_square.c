#include "main.h"

/**
 * print_square - This function display arguments in squares
 * @size: parameter given
 * Return: 0 (success)
 */

void print_square(int size)
{
	int sq1;
	int sq2;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (sq1 = 1; sq1 <= size; sq1++)
	{
	for (sq2 = 1; sq2 <= size; sq2++)
	{
		_putchar('#');
	}
		_putchar('\n');
	}
}
