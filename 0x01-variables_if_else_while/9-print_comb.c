#include <stdio.h>

/**
 * main - displaying number with a comma
 * Return: 0 always
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar('0' + num);
		if (num == 9)
		{
			break;
		}
			putchar(',');
			putchar(' ');
			num++;
	}

			putchar('\n');
			return (0);
}
