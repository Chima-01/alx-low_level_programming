#include <stdio.h>

/**
 * Description: main - A program that prints number combinations
 * in two's and two's
 * Return: 0 (success)
 */

int main(void)
{
	int num;
	int num1;

	for (num = 0; num <= 98; num++)
	{

	for (num1 = num + 1; num1 <= 99; num1++)
	{

		putchar('0' + (num / 10));
		putchar('0' + (num % 10));

		putchar(' ');

		putchar('0' + (num1 / 10));
		putchar('0' + (num1 % 10));

		if (num == 98 && num1 == 99)
		{
			break;
		}

		putchar(',');
		putchar(' ');
	}
	}
		putchar('\n');
		return (0);
}
