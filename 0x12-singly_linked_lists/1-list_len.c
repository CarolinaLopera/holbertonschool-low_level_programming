#include "lists.h"
/**
 * list_len - This function return the number elements of a string list.
 *
 * Return: Always size_t.
 * @h: points to the first node.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
