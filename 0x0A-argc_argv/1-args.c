#include <stdio.h>
#include <stdlib.h>

/**
 * main - The main function serves a starting point for a program execution
 * @argc: counts the number of argument passed to the program
 * @argv: return the value passed to the program
 * Return: 0 (success)
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
