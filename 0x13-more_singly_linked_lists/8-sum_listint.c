#include "lists.h"
/**
 * sum_listint - This function sum all the data of a linked integer list.
 *
 * Return: Always a the result of the sum.
 * @head: points to the first node.
 */
int sum_listint(listint_t *head)
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
