#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees all nodes from a list.
 *
 * Return: Always void.
 * @head: points to the first node.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
