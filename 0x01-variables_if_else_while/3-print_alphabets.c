#include <stdio.h>

/**
 * Description: main - stdout of the English Alphabet lower and uppercase
 * Return: 0 (success)
 */

int main(void)
{
	int alphabet = 'a';
	int alphaBET = 'A';

	while (alphabet <= 'z')
	{

		putchar(alphabet);
		alphabet++;
	}

	while (alphaBET <= 'Z')
	{
		putchar(alphaBET);
		alphaBET++;
	}

		putchar('\n');
		return (0);
}
