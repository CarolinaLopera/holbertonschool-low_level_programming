#include "lists.h"

/**
 * sum_dlistint - check the code
 *
 * Return: Always EXIT_SUCCESS.
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
