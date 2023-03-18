#include <stdio.h>

/**
 * Description: main -  A program that prints alphabbets in small letters
 * Return: 0 (sucess)
 */

int main(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{

		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
