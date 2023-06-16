#include "lists.h"

/**
 * dlistint_len - This function returns the number of elements
 * in a linked dlistint_t list.
 * @h: pointer to head node
 * Return: number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		++num;
	}
		return (num);
}
