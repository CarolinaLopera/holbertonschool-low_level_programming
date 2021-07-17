#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - check the code for Holberton School students.
 *
 * Return: Always null or char pointer.
 *
 * @nmemb: is a variable unsigned int.
 * @size: is a variable unsigned int.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *asig;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	asig = malloc(nmemb * size);

	if (asig == NULL)
	{
		free(asig);
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		asig[i] = 0;
	}
	return (asig);
}
