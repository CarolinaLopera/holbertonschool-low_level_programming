#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - check the code for Holberton School students.
 *
 * Return: Always null or char pointer.
 * @str: is a variable char*.
 *
 */
char *_strdup(char *str)
{
	char *aux = malloc(*str * sizeof(char));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	aux = str;
	return (aux);
}
