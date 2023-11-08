#include "lists.h"
/**
 * print_list - prints a singly linked list
 * @h: 
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	while (list_t != NULL)
	{
		count++;
		printf(h->str);
		printf(h->len);
		h = h->next;
	}
	return(count);
}
