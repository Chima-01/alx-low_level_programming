#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t list.
 * @h: pointer to listint_t list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
		return (count);
}
