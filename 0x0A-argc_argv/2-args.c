#include <stdio.h>

/**
 * main -= this function serves as the starting point for a program
 * execution
 * @argc: counts the number of arguments
 * @argv: returns the value of arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
		return (0);
}
