#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - This function prints numbers
 * @separator: seprates each numbers with comma
 * @n: number of argument to be passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (separator == NULL || n == 0)
		return;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, unsigned int));
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
		printf("\n");

	va_end(list);
}
