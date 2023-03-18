#include <stdio.h>

/**
 * Description: main - print alpt alphabet in lowercase except q and e
 * Return: 0 always (sucess)
 */

int main(void)
{
	int alphabet =  'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			alphabet++;
			continue;
		}

		putchar(alphabet);
		alphabet++;
	}
		putchar('\n');
		return (0);
}
