#include <string.h>
#include "lists.h"
/**
 * add_node_end - check the code for Holberton School students.
 *
 * Return: Always list_t.
 * @head: points to the next node.
 * @str: is a variable char pointer.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	unsigned int len = 0;
	list_t *last = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (new_node);
}
