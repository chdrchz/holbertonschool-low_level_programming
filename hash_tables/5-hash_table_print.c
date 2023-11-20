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
	int pair = 1;

	printf("{");
	
	for (counter = 0; counter < ht->size; counter++)
	{
		current = ht->array[counter];

		while (current != NULL)
		{
			next = current->next;

			if (!pair)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);

			if (next != NULL)
				printf(",");
			
			pair = 0;
			current = next;
		}
	}
	printf("}\n");
}
