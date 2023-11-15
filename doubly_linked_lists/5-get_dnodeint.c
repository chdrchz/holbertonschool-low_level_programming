#include "lists.h"
/**
 * *get_dnodeint_at_index - returns the nth node of the list
 * @head: start of the list
 * @index: placeholder for which node to return
 *
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current;

	current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
