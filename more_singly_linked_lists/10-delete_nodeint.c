#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at given index
 *
 * Return: On success: 1
 * On failure: -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (-1);
	}

	if (index == count - 1)
	{
		*temp = head;
		*head = head->next;
		count = temp->n;
		free (temp);
	}

	return (1);
}
