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

	if (size == 0)
	{
		return ('\0');
	}

	*aux = c;
	return (aux);
}