#include <ctype.h>
#include "main.h"

/**
 * Description: _islower - A function to determine if an alphabet
 * is lowercase or not
 * @c: int c - parameter passed to the function
 * Return: 0 or 1 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);

}
