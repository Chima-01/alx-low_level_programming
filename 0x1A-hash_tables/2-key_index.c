#include "hash_tables.h"

/**
 * key_index - This function gives the index of a key
 * @key: hash value to generate key from
 * @size: size of hash table
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key, value;

	value = hash_djb2(key);
	hash_key = value % size;

	return (hash_key);
}
