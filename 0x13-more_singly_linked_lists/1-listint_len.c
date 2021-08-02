#include "lists.h"
/**
 * listint_len - This function return the number elements of a integer list.
 *
 * Return: Always number of nodes.
 * @h: points to the first node.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
