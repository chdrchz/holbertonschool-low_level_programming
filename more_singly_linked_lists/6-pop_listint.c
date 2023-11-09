#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes head node
 * @head; start of the list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (0);
	}
	
	if (temp != NULL)
	{
		*head = temp->next;
		free(temp);
	}
	return ((*head)->n);
}
