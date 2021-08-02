#include "lists.h"
/**
 * free_listint - Frees all nodes from a list.
 *
 * Return: Always void.
 * @head: points to the first node.
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
