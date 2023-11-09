#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees the list 
 * @head: start of the list 
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t current;

	while (head != NULL)
	{
		current = head;
		head = head->next;

		if (current->n)
		{
			free (current->n);
		}

		free (current);
	}
}
