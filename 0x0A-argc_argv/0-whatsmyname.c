#include <stdio.h>

/**
 * main - The main function takes in two parameters for the command line
 * @argc: counts the number of argument entered in the CL
 * @argv: a pointer to the values entered in the CL when a program is run
 * Return: 0 (success)
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
