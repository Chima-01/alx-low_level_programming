#include "main.h"

/**
 * Description: print_numbers - This function prints numbers
 * from 0 - 9
 * Return: 0 always
 */

void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar('0' + num);
		num++;
	}

		_putchar('\n');
}
