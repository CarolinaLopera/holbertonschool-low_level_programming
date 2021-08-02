#include "lists.h"
/**
 * free_list - check the code for Holberton School students.
 *
 * Return: Always size_t.
 * @head: points to the next node.
 */
void free_list(list_t *head)
{
	list_t *aux = malloc(sizeof(list_t));

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
