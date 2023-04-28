#include "lists.h"

/**
 * free_list - This function frees list_t list
 * @head: parameter to be freed
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
