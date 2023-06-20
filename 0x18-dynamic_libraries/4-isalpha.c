#include "main.h"

/**
 * Description: _isalpha - This function checks if a character is
 * an alphabet or  not
 * @c: The _isalpha function takes a parameter of 'c'.
 * Return: 0 always
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
