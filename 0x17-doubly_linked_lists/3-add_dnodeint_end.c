#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - Add a node at the end (tail) of a list.
 *
 * Return: Always a adress to new node.
 * @head: is a pointer to the next node.
 * @n: is a variable const int to add to the list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *aux = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}

	while (aux->next != NULL)
		aux = aux->next;

	aux->next = new_node;
	aux = new_node;
	new_node->prev = (*head);
	return (new_node);
}
