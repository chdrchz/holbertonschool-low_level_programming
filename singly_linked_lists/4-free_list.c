#include "lists.h"
#include <stdlib.h>
/**
 * free_list - freeing the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while ((head = current) != NULL)
	{
		head = head->next;
		free (current);
	}
}
