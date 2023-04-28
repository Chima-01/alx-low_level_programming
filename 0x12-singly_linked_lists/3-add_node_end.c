#include "lists.h"

/**
 * add_node_end - This function adds a node to end of a list_t list
 * @head: pointer to the pointer updating list
 * @str: string to be printed
 * Return: pointer to added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;

	ptr = *head;
	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
			ptr->next = temp;
	}

	return (*head);
}
