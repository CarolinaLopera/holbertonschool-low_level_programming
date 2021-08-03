#include "lists.h"
/**
 * pop_listint - This function delete head node.
 *
 * Return: Always int.
 * @head: points to the first node.
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int cpy_n;

	if (*head == NULL)
		return (0);

	cpy_n = (*head)->n;

	current = *head;
	*head = current->next;
	free(current);

	return (cpy_n);
}
