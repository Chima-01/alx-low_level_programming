#include <stdio.h>

/**
 * Descriptio: main - A combination of two digits numbers in ascending order
 * with the two combined number different
 * Return: 0 (success)
 */

int main(void)
{
	int num;
	int num1;

	for (num = 0; num < 9; num++)
	{

	for (num1 = num + 1; num1 < 10; num1++)
	{
		putchar('0' + num);
		putchar('0' + num1);

		if (num == 8 && num1 == 9)
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
