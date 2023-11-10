#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: start of list
 * @index: index to delete node at 
 * Return: On success: 1
 * On failure: -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
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
	free(temp);

	return (1);
}
