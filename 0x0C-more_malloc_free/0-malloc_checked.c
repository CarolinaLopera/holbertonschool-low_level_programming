#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - check the code for Holberton School students.
 *
 * Return: Always void.
 * @b: is a variable unsigned int.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *asig = malloc(sizeof(unsigned int) * b);

	if (asig == NULL)
	{
		free(asig);
		*asig = 98;
		return (asig);
	}
	return (asig);
}
