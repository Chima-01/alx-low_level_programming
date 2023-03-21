#include <stdio.h>
#include "main.h"

/**
 * Description: print_alphabet - declaring a function to stdout, display
 * english alphabet in small letters
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
}
