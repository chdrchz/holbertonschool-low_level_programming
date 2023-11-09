#include "lists.h"
/**
 * *get_nodeint_at_index - returns the nth node of a list
 *
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t current;
	unsigned int count = 0;

	current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current->n);
		count++;
		current = current->next;
	}
	return (NULL);
}
