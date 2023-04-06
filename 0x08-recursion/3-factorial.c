#include "main.h"

/**
 * factorial - This function return factorial of a given
 * number
 * @n: parameter number
 * Return: 0  (success)
 */

int factorial(int n)
{
	int f;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	{
		f = n * factorial(n - 1);
			return (f);
	}
}

