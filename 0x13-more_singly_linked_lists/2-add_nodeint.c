#include "lists.h"
/**
 * add_nodeint - This function add a node to beginning (head) of the list.
 *
 * Return: Always a adress to new node.
 * @head: points to the first node.
 * @n: is a variable integrer to add of the list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = (*head);

	(*head) = new_node;
	return (new_node);
}
