#include "lists.h"

/**
 * print_dlistint - This function prints all the
 * elements of a dlistint_t list.
 * @h: head node of dlistint_t
 * Return: number of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
		return (num);
}
