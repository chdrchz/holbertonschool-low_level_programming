#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint_end - adds a node at the end of a list
 * @head: head of list
 * @n: data for new nodes
 * Return: On success: address to the new node
 * On failure: NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new_node;

	current = malloc(sizeof(listint_t));
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
