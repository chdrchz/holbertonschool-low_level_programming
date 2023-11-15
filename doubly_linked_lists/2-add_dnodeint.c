#include "lists.h"
/**
 * *add_dnodeint - adds node at beginning
 * @head: head of the list
 * @n: 
 * Return: On success: address of new node
 * On failure: NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		if (new_node == 0)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		prev->next = *head;
	}
	return (new_node);
}
