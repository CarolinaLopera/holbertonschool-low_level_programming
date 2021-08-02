#include <string.h>
#include "lists.h"
/**
 * add_node - This function add a node to start (head) of the list.
 *
 * Return: Always size_t.
 * @head: points to the next node.
 * @str: is a variable char pointer.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	unsigned int len = 0;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);

	(*head) = new_node;
	return (new_node);
}
