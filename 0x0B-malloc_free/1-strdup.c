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
	if (str == NULL)
	{
		return ('\0');
	}
	else
	{
		int i, j;
		char *aux;

		for (j = 0; str[j] != '\0'; j++)
		{
		}
		aux = malloc(j + 1 * sizeof(char));

		if (aux == NULL)
		{
			return ('\0');
		}

		for (i = 0; str[i] != '\0'; i++)
		{
			aux[i] = str[i];
		}
		return (aux);
	}
}
