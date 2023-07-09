#include "hash_tables.h"

/**
 * hash_table_get - This function retrieves a value associated with a key.
 * @ht: hash table
 * @key: key to retrive
 * Return: value associated with key or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hash;
	char *value;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL || index >= ht->size)
		return (NULL);

	hash = ht->array[index];

	value = malloc(strlen(hash->value) + 1);
	if (value == NULL)
		return (NULL);

	strcpy(value, hash->value);
	return (value);
}
