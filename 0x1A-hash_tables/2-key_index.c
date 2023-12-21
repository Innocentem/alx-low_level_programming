#include "hash_tables.h"

/**
 * key_index: returns the index of a key.
 * @key: pointer to key to get index.
 * @size: size of the array of the hash tbl
 *
 * Return: index at which the key/value pair should be stored in the,
 * array of the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
