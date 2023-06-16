#include "lists.h"

/**
 * get_dnodeint_at_index - This function returns the
 * nth node of a dlistint_t linked list.
 * @head: pointer to first node
 * @index: index to retrive node
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	size_t num_node = 0;

	if (head == NULL)
		return (NULL);

	current = head;

	while (current && num_node < index)
	{
		current = current->next;
		num_node++;
	}
		return (current);
}
