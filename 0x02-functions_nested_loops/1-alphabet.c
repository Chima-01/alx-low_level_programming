#include <stdio.h>
#include "main.h"

/**
 * Description: main - declaring a function to stdout
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
