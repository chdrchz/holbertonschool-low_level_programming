#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list
 * @head: start of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	if (NULL)
	{
		free(current);
	}
}
