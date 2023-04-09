#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function multiplies the next arguments
 * after the first
 * @argc: count num of arguments
 * @argv: points to values of arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
		printf("%d\n", mul);

		return (0);
}
