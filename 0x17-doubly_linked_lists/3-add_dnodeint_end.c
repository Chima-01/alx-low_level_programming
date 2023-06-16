#include "lists.h"

/**
 * add_dnodeint_end - This function adds a new node at the
 * end of a dlistint_t list.
 * @head: pointer to head node
 * @n: element of node
 * Return: address to new_node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
			current->next = new_node;
			new_node->prev = current;
	}
		return (new_node);
}
