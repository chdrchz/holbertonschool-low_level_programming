#include "hash_tables.h"
/**
 * *hash_table_create - creates a new hash table
 * @size: size of the array
 *
 * Return: pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int iterator = 0;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(new_table->size * sizeof(hash_node_s));
	if (new_table->array == NULL)
		return (NULL);
	while (iterator < new_table->size)
	{
		iterator++;
		new_table->array[iterator] = NULL;
	}
	return (new_table);
}
