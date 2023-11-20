#include "hash_tables.h"
/**
 * hash_table_get - retrieves value associated with a key
 * @ht: hash table
 * @key: key to get value from
 *
 * Return: On success: value associated with the element
 * On failure: NULL if key cannot be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = hash_djb2((unsigned char *)key, ht->size);

	current = ht->array[index];

	if (index >= ht->size)
		return (NULL);

	while (current && strcmp(current->key, key) != '\0')
		current = current->next;

	return (current->value);

}
