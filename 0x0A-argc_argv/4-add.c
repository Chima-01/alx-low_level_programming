#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function add all negative number in an argument
 * @argc: counts argument
 * @argv: displays values
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, result;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		result += atoi(argv[i]);
		if (!atoi(argv[i]) || atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
	}
			printf("%d\n", result);
			return (0);
}
