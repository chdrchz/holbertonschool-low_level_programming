#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: start of the list 
 * @index: index to delete node at
 *
 * Return: On success: 1
 * On failure: -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return(1);
	}
	temp = *head;
	while (temp != NULL && count < index)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (-1);
	prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = prev;
	free(temp);
	return (1);
}
