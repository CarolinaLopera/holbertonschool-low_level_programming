#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 *
 * Return: Always a adress to new node.
 * @head: points to the first node.
 * @idx: Is the index of the list where the new node should be added.
 * @n: Is the data for to be save in the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current, *head_cpy = *head;
	unsigned int i = 0;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = (*head);
		(*head) = new_node;
		return (new_node);
	}

	while (head != NULL)
	{
		if ((i + 1) == idx)
		{
			current = (*head)->next;
			new_node->n = n;
			new_node->next = current;
			(*head)->next = new_node;
			*head = head_cpy;
			return (new_node);
		}
		i++;
		*head = (*head)->next;
	}
	*head = head_cpy;
	return (NULL);
}
