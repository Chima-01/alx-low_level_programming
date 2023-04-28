#include "lists.h"

/**
 * add_node - A function that adds a new node at the beginning
 * of a list_t list.
 * @head: struct to upadate new node
 * @str: str to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));

	if (add == NULL)
		return (NULL);

	add->str = strdup(str);
	add->len = strlen(str);
	add->next = *head;

	*head = add;

	return (*head);
}
