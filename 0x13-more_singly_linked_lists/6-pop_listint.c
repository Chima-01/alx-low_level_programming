#include "lists.h"

/**
 * Description: pop_listint -  a function that deletes the head node
 * of a listint_t linked list, and returns the head node’s data (n)
 * @head: pointer pointer to head node
 * Return: node data n;
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

		temp = *head;
		n = temp->n;
		*head = (*head)->next;
		free(temp);

		return (n);
}
