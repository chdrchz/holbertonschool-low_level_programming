#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table 
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int counter;
	hash_node_t *freer, *temp;

	for (counter = 0; counter < ht->size; counter++)
	{
		freer = ht->array[counter];
		while (freer)
		{
			temp = freer->next;
			free(freer);
			freer = temp;
		}
	}
	free(ht->array);
	free(ht);
}
