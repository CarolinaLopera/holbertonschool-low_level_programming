#include <string.h>
#include "lists.h"
/**
 * add_nodeint_end - Add a node at the end (tail) of a list.
 *
 * Return: Always a adress to new node.
 * @head: points to the next node.
 * @n: is a variable const int to add to the list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last = *head;

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
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (new_node);
}
