#include "lists.h"
/**
 * list_len - returns length of list
 * @h: head node
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		h = h->next;
		count++;
	}	
}
