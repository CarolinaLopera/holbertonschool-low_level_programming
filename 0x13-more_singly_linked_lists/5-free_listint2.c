#include "lists.h"
/**
 * free_listint2 - Frees all nodes of a list.
 *
 * Return: Always void.
 * @head: points to the first node.
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}

	head = NULL;
}
