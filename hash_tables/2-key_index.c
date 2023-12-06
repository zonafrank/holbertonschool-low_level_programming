#include "hash_tables.h"

/**
 * key_index - computes the index of a key
 * @key: the value for which the index is to be calculated
 * @size: the size of the hash table
 * Return: the index at which key will be stored in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
