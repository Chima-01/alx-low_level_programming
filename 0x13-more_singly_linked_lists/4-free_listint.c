#include "lists.h"

/**
 * free_listint - This function frees the list of
 * listint_t
 * @head: pointer to head of list;
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
