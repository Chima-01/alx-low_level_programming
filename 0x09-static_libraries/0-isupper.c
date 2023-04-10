#include "main.h"

/**
 * Description: _isupper - This functions returns 1 or 0 if a
 * char is uppercase or not
 * @c: parameter of the function
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
