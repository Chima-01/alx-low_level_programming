#include <stdio.h>

/**
 * main - Displaying numbers in base 10 using putchar function
 * Return: 0 Always (success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0'+ num);
		num++;
	}

		putchar('\n');
		return (0);
}
