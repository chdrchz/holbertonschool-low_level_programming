#include "lists.h"
/**
 * *insert_dnodeint_at_index - inserts new node at index
 * @h: start of the list
 * @idx: index to add new node
 * @n: data to be added to new node
 *
 * Return: On success: address of new node
 * On failure: NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *prev_node, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;

	while (new_node != NULL)
		count++;

	if (count == idx)
	{
		new_node->next = prev-node->next;
		prev_node->next = new_node;
		new_node->prev = prev_node;
	}
	return (new_node);
}
