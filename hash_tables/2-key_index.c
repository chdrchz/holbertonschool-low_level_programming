#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: the data stored at the index
 * @size: size of the array
 *
 * Return: index the key is stored at
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
