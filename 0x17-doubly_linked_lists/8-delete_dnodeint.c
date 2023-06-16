#include "lists.h"

/**
 * delete_dnodeint_at_index - This function deletes a node at
 * a particular index
 * @head: head node
 * @index: index of node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	size_t count = 0;

	if (*head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{

		if ((*head)->next != NULL)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(current);
		}
		else if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
		}
			return (1);
	}

	while (current && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);
	temp = current;
	current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(temp);
	return (1);
}
