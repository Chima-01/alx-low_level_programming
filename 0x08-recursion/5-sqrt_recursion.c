#include "main.h"

/**
 * _sqrt_recursion - This function finds the square root of a given number
 * return -1 if number do not have a natural squareroot
 * @n: parameter to search for the square root
 * @a: parameter to the square_root function
 * Return: root (sucess)
 */

int square_root(int a, int n);

int _sqrt_recursion(int n)
{
	int num = n;

	if (n < 0)
		return (-1);
	else
		return (square_root(num, n));
}

/**
 * square_root - This function finds the square root of a given number
 * @a: parameter given to hold number
 * @n: parameter given
 * Return: root (sucees)
 */

int square_root(int a, int n)
{
	int square = n * n;

	if (n < 0)
		return (-1);
	else if (square == a)
		return (n);
	else if (n <= 1)
		return (-1);
	{
		return (square_root(a, n - 1));
	}
}
