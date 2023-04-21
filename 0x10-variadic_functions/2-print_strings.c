#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - This function prints a string
 * @separator: chat to separate str
 * @n: number of argument to be passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i;
	char  *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char*);
		if (!str)
		{
			str = "nil";
		}
		printf("%s", str);
	if (separator != NULL && i != n - 1)
	{
		printf("%s", separator);
	}
	}
		printf("\n");
		va_end(list);
}
