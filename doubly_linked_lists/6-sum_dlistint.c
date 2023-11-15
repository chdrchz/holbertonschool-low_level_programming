#include "lists.h"
/**
 * sum_dlistint - returns the sum of all data in the list
 * @head: start of list
 *
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
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
