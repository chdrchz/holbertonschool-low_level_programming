#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * *add_node - adds a node to the beginning of list
 * @head: head node
 * @str: data in list
 * Return: On success: address of new node
 * On failure: NULL
 */
list_t *add_node(list_t **head, const char *str)
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
	new_node->next = *head;
	*head = new_node;
	}

	return (new_node);


}
