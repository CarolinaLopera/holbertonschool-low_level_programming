#include "lists.h"
/**
 * delete_nodeint_at_index - Delete a node at a given position.
 *
 * Return: 1 if it is delete correctly, -1 if it failed
 * @head: points to the first node.
 * @index: Is the index of the node that should be deleted.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *head_cpy = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = current->next;
		free(current);
		return (1);
	}

	while (*head != NULL)
	{
		if ((i + 1) == index)
		{
			current = (*head)->next;
			(*head)->next = current->next;
			free(current);
			*head = head_cpy;
			return (1);
		}
		i++;
		*head = (*head)->next;
	}
	return (-1);
}
