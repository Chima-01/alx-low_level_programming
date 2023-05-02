#include "lists.h"

/**
 * get_nodeint_at_index - This function returns the nth node of
 * a listint_t linked list.
 * @head: pointer to head node
 * @index: indext to pop node value
 * Return: node nth data
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

		return (head);
}
