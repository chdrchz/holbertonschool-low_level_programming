#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head; start of the list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head, *previous;

	if (head = NULL)
	{
		return (0);
	}
	
	if (temp != NULL)
	{
		*head = temp->next;
		free(temp);
	}
	while (temp != NULL)
	{
		previous = temp;
		temp = temp->next;
		free(temp);
	}
	return (*head->n);
}
