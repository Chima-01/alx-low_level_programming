#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - This function prints a name
 * @name: name be printed
 * @f: a function pointer to a particular function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
