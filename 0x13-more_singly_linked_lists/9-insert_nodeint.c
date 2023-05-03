#include "lists.h"

/**
 * insert_nodeint_at_index - This function that inserts
 * a new node at a given position.
 * @head: pointer to head node
 * @idx: index of where node should be added
 * @n: value of data (n)
 * Return: nodes
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *add_node;
	unsigned int i = 0;

	add_node = malloc(sizeof(listint_t));

	if (add_node == NULL)
	{
		return (NULL);
	}
		add_node->n = n;
		add_node->next = NULL;

	if (idx == 0)
	{
		add_node->next = *head;
		*head = add_node;
	}

	if (idx != 0)
	{
	while (*head != NULL && i < idx - 1)
	{
		*head = (*head)->next;
		i++;
	}
		add_node->next = (*head)->next;
		(*head)->next = add_node;
	}

		return (*head);
}
