#include "main.h"

/**
 * Description: print_most_numbers - This function prints numbers
 * from 0 - 9 skipping 2 & 4
 * Return: 0 always
 */

void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num == 2 || num == 4)
		{
			num++;
			continue;
		}

		_putchar('0' + num);
		num++;
	}

		_putchar('\n');
}
