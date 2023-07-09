#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht:	hash table
 * @key: key to hash item
 * @value: value of hash item
 * Return: 1 (if success) or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	 hash_node_t *head;
	 unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (index >= ht->size)
		return (0);

	/**
	*if (ht->array[index] != NULL)
	*{
		current = ht->array[index];
		if (strcmp(current->key, key) == 0)
		{
		ht->array[index]->value = realloc(current->value, strlen(value));
		strcpy(ht->array[index]->value, value);
		return (1);
		}
	}
	*/

	head = ht->array[index];
	head = create_node(head, key, value);
	if (!head)
		return (0);

	ht->array[index] = head;
	return (1);
}

/**
 * create_node - This function creates a node for the hash table
 * it also handles collision
 * @head: head node to index of hash table
 * @key: key a unique str to make node
 * @value: value corresponding to key
 * Return: head of node
 */

hash_node_t *create_node(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	new_node->key = malloc(strlen(key) + 1);
	new_node->value = malloc(strlen(value) + 1);

	if (new_node == NULL)
		return (NULL);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (NULL);
	}

	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = NULL;

	if (head == NULL)
		head = new_node;
	else
	{
		new_node->next = head;
		head = new_node;
	}
	return (head);
}
