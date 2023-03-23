#include <ctype.h>
#include "main.h"

/**
 * Description: _isupper - This functions returns 1 or 0 if a
 * char is uupercase or not
 * @c: parameter of the function
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
