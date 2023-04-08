#include "main.h"

/**
 * is_prime_number - This function checkes if a number is a prime num
 * returns 1 if true and zero if false
 * @n: number given
 * @c: number to increment
 * Return: 1 (success)
 */

int prime_number(int n, int c);

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	{
		return (prime_number(n, 2));
	}
}

int prime_number(int n, int c)
{
	if (n % c == 0)
		return (0);
	if (c > n / 2)
		return (1);
	{
		return (prime_number(n, c + 1));
	}
}
