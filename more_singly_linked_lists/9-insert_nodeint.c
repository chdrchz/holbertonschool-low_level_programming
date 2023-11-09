#include "lists.h"
#include <stdlib.h>
/**
 * *insert_nodeint_at_index - inserts a new node at a given index
 * @head: start of list
 * @idx: index to insert new node
 * @n: data for the new node
 * Return: On success: address of new node
 * On failure: NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new_node;
	unsigned int count = 0;
	
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	current = *head;

	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node = current->next;
			current->next = new_node;
			return (new_node);
		}
		count++;
		current = current->next;
	}

	return (NULL);
}
