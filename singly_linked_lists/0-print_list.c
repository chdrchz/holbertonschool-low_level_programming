#include "lists.h"
#include <stdio.h>
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
		printf("%s", h->str);
		h = h->next;
		count++;
	}
	return(count);
}
