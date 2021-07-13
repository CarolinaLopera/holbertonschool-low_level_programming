#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *create_array - check the code for Holberton School students.
 *
 * Return: Always null or char pointer.
 * @size: is a variable int.
 * @c: is a variable char*.
 *
 */
char *create_array(unsigned int size, char c)
{
	char *aux = malloc(size * sizeof(char));
	unsigned int i = 0;

	if (size == 0)
	{
		return ('\0');
	}
	if (aux == NULL)
	{
		return ('\0');
	}

	for (; i < size; i++)
	{
		aux[i] = c;
	}
	return (aux);
}
