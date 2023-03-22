#include "main.h"

/**
 * Description: print_sign - A function to determine
 * if a number is positive, negative or zero
 * Its return an addition sign for positive, subtraction for negative
 * and 0 for the zero digit
 * @n: parameter to take in argument
 * Return: 0 (success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
