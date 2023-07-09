#include "hash_tables.h"

/**
 * hash_table_print - This key/value in a hash table
 * @ht: hash table to explore
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, count = 0, hash = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
			count++;
		i++;
	}

	if (count == 0)
	{
		printf("{}\n");
		return;
	}

	i = 0;
	while (i < ht->size)
	{
	if (i == 0)
		printf("{");
	if (ht->array[i] != NULL)
	{
		node = ht->array[i];
	while (node != NULL)
	{
	if (hash < count - 1 || (hash == count - 1 && node->next != NULL))
		printf("'%s': '%s', ", node->key, node->value);
	else
	{
		printf("'%s': '%s'}\n", node->key, node->value);
		return;
	}
		node = node->next;
	}	hash++;
	}	++i;
	}
}
