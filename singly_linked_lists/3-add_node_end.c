#include "lists.h"
/**
 * *add_node_end - adds a node at the end 
 *
 * Return: On success: address of new element
 * On failure: NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node)
	{
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->str = strdup(str);
		new_node->len = strlen(str);

		if (new_node->next == NULL)
		{
			new_node->next = NULL;
		}
	}
	return (new_node);
}
