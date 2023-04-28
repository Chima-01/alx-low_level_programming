#include "lists.h"

/**
 * list_len - This returns the number of element in a list
 * @h: pointer to list
 * Return: number of element
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
		return (i);
}
