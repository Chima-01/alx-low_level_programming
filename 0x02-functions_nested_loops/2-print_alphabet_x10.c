#include "main.h"

/**
 * Description:  print_alphabet_x10 - output the english alphbets
 * 10 times
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	int num;
	int i;

	for (num = 0; num < 10; num++)
	{

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
	}
}
