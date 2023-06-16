#include "lists.h"

/**
 * insert_dnodeint_at_index - This function adds node at a particular index
 * in dooubly linked list
 * @h: head node
 * @idx: index to add new node
 * @n: data of new node
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *temp, *new_node;
	size_t count = 0;

	if (h == NULL)
		return (NULL);
	if (*h == NULL)
		return (add_dnodeint(h, n));
	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	for (count = 0; current->next; count++)
	{
		current = current->next;
	}

	if (idx == count + 1)
		return (add_dnodeint_end(h, n));
	else if (idx > count + 1)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	current = *h;
	count = 0;
	while (current && count < idx - 1)
	{
		current = current->next;
		++count;
	}
	new_node->n = n;
	temp = current->next;
	current->next = new_node;
	new_node->prev = current;
	new_node->next = temp;
	temp->prev = new_node;
		return (new_node);
}
