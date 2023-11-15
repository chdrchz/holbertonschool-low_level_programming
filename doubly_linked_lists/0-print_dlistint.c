#include "lists.h"
/**
 * print_dlistint - prints the elements in a doubly-linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h->n == 0)
		return (0);
	else 
		printf("%d\n", h->n);
	h = h->next;
	count++;

	return (count);
}
