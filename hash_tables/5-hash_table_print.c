#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current, *next;
	unsigned long int counter;

	printf("{");
	
	for (counter = 0; counter < ht->size; counter++)
	{
		current = ht->array[counter];

		while (current != NULL)
		{
			next = current->next;
			printf("'%s': '%s'", current->key, current->value);

			if (next != NULL)
				printf(",");

			current = next;
		}

		printf("}");
	}
}
