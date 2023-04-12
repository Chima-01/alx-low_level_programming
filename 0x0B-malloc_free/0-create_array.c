#include "main.h"
#include <stdlib.h>

/**
 * create_array - This function creates an array of char
 * and allocates a memery for the characters using malloc function
 * @size: size of memory to be allocated time char
 * @c: char to be stored
 * Return: a pointer to the memory of char(success)
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	str = malloc((size) * sizeof(char));

		if (size == 0 || str == NULL)
			return (NULL);

		while (i < size)
		{
			str[i] = c;
			i++;
		}

		return (str);
}
