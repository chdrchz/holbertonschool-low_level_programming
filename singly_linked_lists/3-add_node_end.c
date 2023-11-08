#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * *add_node_end - adds a node at the end 
 *
 * Return: On success: address of new element
 * On failure: NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	new_node = malloc(sizeof(list_t));

	if (current == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else 
	{
		current = *head;

		while ((current->next != NULL))
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
