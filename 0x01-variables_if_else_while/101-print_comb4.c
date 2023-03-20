#include <stdio.h>

/**
 * Description: main - A combination of three different digit
 * with each digit digit different
 * Return: 0 always
 */

int main(void)
{
	int num;
	int num1;
	int num2;

	for (num = 0; num < 8; num++)
	{

	for (num1 = num + 1; num1 < 9; num1++)
	{

	for (num2 = num1 + 1; num2 < 10; num2++)
	{
		putchar('0' + num);
		putchar('0' + num1);
		putchar('0' + num2);

		if (num == 7 && num1 == 8)
		{
			if (num2 == 9)
				break;
		}
			putchar(',');
			putchar(' ');
	}
	}
	}
			putchar('\n');
			return (0);
}
