#include "hash_tables.h"
/**
 * hash_table_set - adds an element to a hash table 
 * @ht: hash table 
 * @key: hash key
 * @value: value associated with key
 *
 * Return: On success: 1
 * On failure: 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *current, *new_node;

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	if (current == 0)
	{
		free(current->value);
		current = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));
	
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
