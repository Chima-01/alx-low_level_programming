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
	int num2;
	int num3;

	for (num = 0; num < 10; num++)
	{

	for (num1 = 0; num1 < 9; num1++)
	{

	for (num2 = num; num2 < 10; num2++)
	{

	for (num3 = num1 + 1; num3 < 10; num3++)
	{
		putchar('0' + num);
		putchar('0' + num1);

		putchar(' ');

		putchar('0' + num2);
		putchar('0' + num3);

	if (num == 9 && num1 == 8)
	{
		if (num2 == 9 && num3 == 9)
			break;
	}

		putchar(',');
		putchar(' ');
	}
	}
	}
	}
		putchar('\n');
		return (0);
}
