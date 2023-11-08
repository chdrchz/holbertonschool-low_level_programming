#include "lists.h"
/**
 * print_listint - prints data in nodes
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		count++;
		printf("[%d]", h->n);
	}
	return (count);
}
