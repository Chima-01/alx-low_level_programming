#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This function add all negative number in an argument
 * @argc: counts argument
 * @argv: displays values
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, j, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (!isdigit(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}
	}
		result += atoi(argv[i]);
	}
		printf("%d\n", result);
		return (0);
}
