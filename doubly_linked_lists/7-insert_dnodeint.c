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
	dlistint_t *new_node, *current;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	current = *h;

	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = current->next;
			if (current->next != NULL)
				current->next->prev = new_node;
			current->next = new_node;
			new_node->prev = current;
			return (new_node);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
