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
	int i;

	if (aux == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		aux[i] = str[i];
	}
	/*aux = str;*/
	return (aux);
}
