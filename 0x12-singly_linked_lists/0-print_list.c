#include <stdio.h>
#include "lists.h"
/**
 * print_list - This function print a string list.
 *
 * Return: Always size_t.
 * @h: points to the first node.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
