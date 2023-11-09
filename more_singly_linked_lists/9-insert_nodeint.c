#include "lists.h"
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
	idx = 0;

	current = *head;

	while (current != NULL)
	{
		if (count == idx)
		{
			current = *new_node->n;
			return (current);
		}
		current = current->next;
	}
	return (NULL);
}
