#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes head node
 * @head: start of the list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = (*head)->next;
	value = temp->n;
	free(temp);

	return (value);
}
