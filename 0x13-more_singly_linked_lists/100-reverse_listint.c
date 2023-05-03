#include "lists.h"

/**
 * reverse_listint - This function reverses a listint_t linked list.
 * @head: pointer to head node
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *fwd == NULL, *prev = NULL;

	if (head == NULL)
		return (NULL);

	while (*head)
	{
		fwd = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = fwd;
	}
		*head = prev;
		return (prev);
}
