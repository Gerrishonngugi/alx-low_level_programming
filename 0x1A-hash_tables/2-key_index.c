#include "hash_tables.h"

/**
 * key_index - Get the index at where a key pair should
 *             be stored in hash table array.
 * @key: Key to get the index of.
 * @size: size of array of the hash table.
 *
 * Return: key index.
 *
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
