#include <stdio.h>

/**
 * main - Displaying Alphabet in english language using putchar function
 * in reverse order
 * Return: 0 Always (success)
 */

int main(void)
{
	int alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}

		putchar('\n');
		return (0);
}
