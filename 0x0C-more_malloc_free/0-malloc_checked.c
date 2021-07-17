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
	char *asig = malloc(b);

	if (asig == NULL)
	{
		exit(98);
	}
	return (asig);
}
