#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This function that returns the sum of all its parameters
 * @n: number of arguments function to be passed
 * Return: sum (sucess)
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list func;

	unsigned int i, sum = 0;

	if (n == 0)
	return (0);

	va_start(func, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(func, unsigned int);
	}
		va_end(func);

		return (sum);
}
