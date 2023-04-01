#include "main.h"

/**
 * print_number - This function prints out a given argument
 * @n: parameter given
 */

void print_number(int n)
{
	if (n < -9)
	{
		n = n * - 1;
		_putchar('-');
		print_number(n / 10);
		_putchar('0' + (n % 10));
	}
	else if (n < 0)
	{
		n = n * - 1;
		 _putchar('-');
		 _putchar('0' + (n % 10));
	}
	else if (n >= 0 && n <= 9)
	{
		_putchar('0' + (n % 10));
	}
	else
	{
		print_number(n / 10);
		_putchar('0' + (n % 10));
	}

}
