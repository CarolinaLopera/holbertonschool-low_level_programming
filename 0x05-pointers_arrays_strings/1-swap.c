#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 *
 * Return: viod.
 * @a: is a variable point declared.
 * @b: is a variable point declared.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
