#include <stdio.h>

void print_chars(void) __attribute__((constructor));
/**
 * print_chars - This function prints a str automatically
 * before main function
 */


void print_chars(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
