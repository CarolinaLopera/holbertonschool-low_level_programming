#include "lists.h"
/**
 * get_nodeint_at_index - This function return a node specified.
 *
 * Return: Always int.
 * @head: points to the first node.
 * @index: is a variable unsigned integer.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
