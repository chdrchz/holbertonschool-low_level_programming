#include "lists.h"
/**
 * *add_dnodeint_end - adds a node at the end of a list
 * @head: start of the list
 * @n: data to be added in new node
 *
 * Return: On success: address of new node
 * On failure: NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	
	new_node->n = n;
	current = *head;

	while (current->next != NULL)
		current->next = new_node;

	return (new_node);
		
}
