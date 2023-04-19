#include "function_pointers.h"

/**
 * print_name - This function prints a name
 * @name: name be printed
 * @f: a function pointer to a particular function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
