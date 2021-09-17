#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: is a pointer to the first node
 * @n: is a variable integrer to add of the list.
 * Return: adress of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	if (*head != NULL)
		(*head)->prev = new_node;
	else
		new_node->prev = NULL;

	return (new_node);
}
