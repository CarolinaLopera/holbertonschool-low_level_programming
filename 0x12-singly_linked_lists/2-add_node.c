#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - check the code for Holberton School students.
 *
 * Return: Always size_t.
 * @head: points to the next node.
 * @str: is a variable char pointer.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (struct list_s*) malloc(sizeof(list_t));
	unsigned int len = 0;
	char *str_cp;

	while (str[len] != '\0')
		len++;

	str_cp = strdup(str);

	if (str_cp == NULL)
	{
		free(str_cp);
		return (NULL);
	}

	new_node->str = str_cp;
	new_node->len = len;
	new_node->next = (*head);

	(*head) = new_node;

	return (new_node);
}
