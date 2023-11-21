#include "hash_tables.c"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table 
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int counter;
	hash_node_t *free, *temp;

	for (counter = 0; counter < ht->size; counter++)
	{
		free = ht->array[counter];
		while (free)
		{
			temp = free->next;
			free(free);
			free = temp;
		}
	}
	free(ht->array);
	free(ht);
}
