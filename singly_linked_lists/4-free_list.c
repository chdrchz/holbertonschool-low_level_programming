#include "lists.h"
#include <stdlib.h>
/**
 * free_list - freeing the list
 * @head: start of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		if (current->str)
		{
			free(current->str);
		}
		free(current);
	}
}
