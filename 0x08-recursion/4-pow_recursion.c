#include "main.h"

/**
 * _pow_recursion - This functions a numx raise to power of a numy
 * @x: first parameter num
 * @y: number to power of x
 * Return: 0 (success)
 */

int _pow_recursion(int x, int y)
{
	if (x && y < 0)
		return (-1);
	else if (x && y == 0)
		return (1);
	{
	return (x *  _pow_recursion(x, y - 1));
	}
}
