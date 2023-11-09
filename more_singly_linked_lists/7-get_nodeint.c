#include "lists.h"
/**
 * *get_nodeint_at_index - returns the nth node of a list
 *
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (*head != NULL && index != *head->n)
	{
		count++;
		head = head->next;
	}
	return (head);
}
