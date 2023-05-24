#include "main.h"

/**
 * get_bit - This function gets the value of a bit
 * at a particular index
 * @n: number
 * @index: index to get bit
 * Return: the value of the bit at index index or
 * -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	size_t limit = sizeof(unsigned long int) * 8;
	int bit;

	if (index > limit)
		return (0);

	n >>= index;
	bit = n & 1;
		return (bit);
}
