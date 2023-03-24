#include "main.h"

/**
 * more_numbers - A number thats print the number from
 * 0 - 14
 * Return: 0 (success)
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int b = 0;

	while (b <= 14)
	{
		if (b > 9)
		{
		_putchar('1');
		}
		_putchar((b % 10) + '0');
		b++;
	}
		_putchar('\n');
		i++;
	}
}
