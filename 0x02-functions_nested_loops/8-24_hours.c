#include <stdio.h>
#include "main.h"

/**
 * Description: jack_bauer - display minutes and hours in a day
 * Return: 0 (success)
 */

void jack_bauer(void)
{
	int n;
	int j;

	for (n = 0; n <= 23; n++)
	{
	for (j = 0; j <= 59; j++)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));

		_putchar(':');

		_putchar('0' + (j / 10));
		_putchar('0' + (j % 10));

		_putchar('\n');
	}
	}
}
