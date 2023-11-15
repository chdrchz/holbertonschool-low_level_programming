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
	unsigned int count == 0;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}

	current = *head;

	while (current != NULL)
	{
		if (count == index - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			new_node->prev = current;
			return (new_node);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
