#include "lists.h"
/**
 * distint_len - returns the number of elements in a doubly linked list
 * @h: head of the list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
