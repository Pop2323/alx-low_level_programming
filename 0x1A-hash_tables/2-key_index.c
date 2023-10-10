#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key
 * @key: ptr to key
 * @size: The table size
 * Return: return the index key value
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
