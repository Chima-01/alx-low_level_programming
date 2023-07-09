#include "hash_tables.h"

/**
 * hash_table_delete - This function deletes an hash table
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hash;
	unsigned long int i = 0;

	if (!ht)
		return;

	while (i < ht->size)
	{
		hash = ht->array[i];
		if (hash != NULL)
		{
			free_node(hash);
		}
		i++;
	}
		free(ht->array);
		free(ht);
}

/**
 * free_node - This function frres a linked list
 * @node: node to free
 */

void free_node(hash_node_t *node)
{
	hash_node_t *temp;

	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
		free(node);
}

