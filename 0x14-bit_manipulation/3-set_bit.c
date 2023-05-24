#include "main.h"

/**
 * set_bit - This function sets a bit to 1
 * at a particular index
 * @n: number
 * @index: bit you want to set
 * Return: 1 (sucess) or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	size_t limit = sizeof(unsigned long int) * 8;
	unsigned long int bit;

	if (index > limit - 1)
		return (-1);

	bit = 1 << index;
	*n = *n | bit;
		return (1);
}
