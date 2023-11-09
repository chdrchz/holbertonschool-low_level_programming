#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints data in nodes
 * @h: head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		if (h->n == NULL)
		{
			return (NULL);
		}
		else
		{
			printf("%d", h->n);
		}

		h = h->next;
		count++;
	}

	return (count);
}
