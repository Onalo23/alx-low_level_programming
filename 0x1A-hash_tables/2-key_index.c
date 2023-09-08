#include "hash_tables.h"

/**
 * key_index - gets index in which key/value
 *      are stored in array of hash table
 * @key: key to get the index
 * @size: size of array of hash table
 *
 * Return: the index key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
