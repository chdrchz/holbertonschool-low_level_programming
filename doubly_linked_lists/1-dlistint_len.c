#include "lists.h"
/**
 * dlistint_len - returns number of nodes in list
 * @h: head of list
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
