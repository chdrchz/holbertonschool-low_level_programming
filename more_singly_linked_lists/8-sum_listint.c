#include "lists.h"
/**
 * sum_listint - returns the sum of all data in nodes
 * @head: start of the list 
 * Return: sum of node data
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	current = head;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
