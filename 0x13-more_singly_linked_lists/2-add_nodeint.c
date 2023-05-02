#include "lists.h"

/**
 * add_nodeint - This function adds a node to the beggining of
 * a list
 * @head: pointer pointer to head pointer of type listint_t
 * @n: value of listint_t n;
 * Return: nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;

		return (new_node);
}
