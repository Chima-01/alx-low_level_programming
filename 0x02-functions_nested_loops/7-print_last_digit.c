#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * Description: print_last_digit - This function display
 * the last digit of a number
 * @num: pararmeter for the function
 * Return: 0 always
 */

int print_last_digit(int num)
{
		_putchar('0' + (num % 10));
		return (num);

		_putchar('\n');
}
