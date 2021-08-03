#include "lists.h"
/**
 * pop_listint - This function print a list to integer.
 *
 * Return: Always int.
 * @head: points to the first node.
 */
int pop_listint(listint_t **head)
{
	listint_t *current = (*head)->next;
	int cpy_n;

	if (head == NULL)
		return (0);

	cpy_n = (*head)->n;

	if (current != NULL)
	{
		*head = (*head)->next;
	}

	free(current);
	head = NULL;
	return (cpy_n);
}
