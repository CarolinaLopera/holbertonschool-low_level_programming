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
		char *aux = malloc(*str * sizeof(char));
		int i;

		if (aux == NULL)
		{
			return ('\0');
		}

		for (i = 0; str[i] != '\0'; i++)
		{
			aux[i] = str[i];
		}
		free(str);
		return (aux);
	}
}
