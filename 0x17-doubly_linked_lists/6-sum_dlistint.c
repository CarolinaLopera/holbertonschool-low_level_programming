#include "lists.h"

/**
 * sum_dlistint - check the code
 * @head: is a pointer to the first node.
 * Return: the sum of all the data (n).
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
