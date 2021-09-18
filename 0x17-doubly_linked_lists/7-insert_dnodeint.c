#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 *
 * Return: Always a adress to new node.
 * @h: Is a pointer to the first node.
 * @idx: Is the index of the list where the new node should be added.
 * @n: Is the data for to be save in the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *aux = *h;
	unsigned int i = 0;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = (*h);
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		(*h) = new_node;
		return (new_node);
	}

	while (aux != NULL)
	{
		if ((i + 1) == idx)
		{
			if (aux->next == NULL)
				return (add_dnodeint_end(h, n));
			new_node->n = n;
			new_node->next = aux->next;
			new_node->prev = aux;
			aux->next->prev = new_node;
			aux->next = new_node;
			aux = *h;
			return (new_node);
		}
		i++;
		aux = aux->next;
	}
	free(new_node);
	aux = *h;
	return (NULL);
}
