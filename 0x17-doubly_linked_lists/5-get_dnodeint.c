#include "lists.h"

/**
 * get_dnodeint_at_index - This function return a node specified.
 *
 * Return: Always int.
 * @head: points to the first node.
 * @index: is a variable unsigned integer.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
