#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int counter;
	
	for (counter = 0; counter < ht->size; counter++)
	{
		current = ht->array[counter];

		while (current != NULL)
		{
			printf("%s, %s", current->key, current->value);
			current = current->next;
		}
	}
}
