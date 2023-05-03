#include "lists.h"

/**
 * delete_nodeint_at_index - This function  deletes the node at index index
 * of a listint_t linked list.
 * @head: pointer to head node
 * @index: index to delete node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete, *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		if (!temp)
		{
			return (-1);
		}
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && i < index - 1)
	{
		temp = temp->next;
		i++;
		if (!temp)
		{
			return (-1);
		}
	}
		delete = temp->next;
		temp->next = delete->next;
		free(delete);
		return (1);
}
