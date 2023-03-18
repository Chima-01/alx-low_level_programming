#include <stdio.h>

/**
 * main - outputing numbers in base 10
 * Return: 0 (success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}

	printf("\n");
	return (0);
}
