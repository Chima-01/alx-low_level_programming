#include "lists.h"

/**
 * listint_len - A function that returns the number of elements in a linked
 * listint_t list.
 * @h: pointer to elements in listint_t
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
		return (count);
}
