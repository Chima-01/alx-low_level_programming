#include "lists.h"

/**
 * sum_dlistint - This function returns the sum of all
 * the data (n) of a dlistint_t linked list
 * @head: head of double linked list
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
		return (sum);
}
