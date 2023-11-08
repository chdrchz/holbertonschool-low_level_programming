#include "lists.h"
/**
 * print_list - prints a singly linked list
 * @h: 
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	
	while (h != NULL)
	{
		printf("%d", h->data);
		h = h->next;
		count++;
	}
	return(count);
}
