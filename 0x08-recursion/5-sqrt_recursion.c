#include "main.h"

/**
 * _sqrt_recursion - This function finds the square root of a given number
 * return -1 if number do not have a natural squareroot
 * @n: parameter to search for the square root
 * @a: parameter to the square_root function
 * Return: root (sucess)
 */

int square_root(int a, int, int n);

int _sqrt_recursion(int n)
{
	int num = n;

	if (n < 0)
		return (-1);
	else
		return (square_root(num, 0, n));
}

/**
 * square_root - This function finds the square root of a given number
 * @a: parameter given to hold number
 * @n: parameter given
 * Return: root (sucees)
 */

int square_root(int a, int root, int n)
{
	root = n / 2;
	int square = root * root;

	if (root < 0)
		return (-1);
	else if (square == a)
		return (n);
	else if (root <= 1)
		return (-1);
	{
		return (square_root(a, root - 1, n));
	}
}
