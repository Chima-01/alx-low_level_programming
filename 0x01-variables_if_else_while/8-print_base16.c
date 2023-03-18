#include <stdio.h>

/**
 * main - listing numbers in hexadecimal with letters in lowercase
 * Return: 0 always (successful)
 */

int main(void)
{
	int num = 0;
	int alphabet = 'a';

	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}

	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}
		putchar('\n');
		return (0);
}
