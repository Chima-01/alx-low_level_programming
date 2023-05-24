#include "main.h"

/**
 * clear_bit - This function converts the bit at a particular
 * index to 0
 * @n: number
 * @index: index to set bit to 0
 * Return: 1 (success) or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	size_t limit = sizeof(unsigned long int) * 8;
	unsigned long int bit;

	if (index > limit - 1)
		return (-1);

	bit = ~(1 << index);
	*n = *n & bit;
		return (1);
}
