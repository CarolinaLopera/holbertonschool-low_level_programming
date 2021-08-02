#include "lists.h"
/**
 * free_list - check the code for Holberton School students.
 *
 * Return: Always size_t.
 * @head: points to the next node.
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head->str);
		free(head);
		head = aux;
	}
}
