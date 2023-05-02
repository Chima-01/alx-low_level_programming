#include "lists.h"

/**
 * free_listint2 - This function frees a listint_t list.
 * @head: pointer pointer to head pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
		*head = NULL;
}
