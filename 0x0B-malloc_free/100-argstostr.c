#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - check the code for Holberton School students.
 *
 * Return: viod.
 * @s: is a variable point declared.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}
/**
 * free_grid - check the code for Holberton School students.
 *
 * Return: pointer to pointer.
 * @av: is a variable char pointer to pointer.
 * @ac: is a variable int.
 */
char *argstostr(int ac, char **av)
{
	int len = _strlen(av);
	int i, j;
	char *aux;

	if (ac == 0 || av == NULL)
	{
		return (1);
	}
	aux = malloc(len * sizeof(char));
	if (aux == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < len; j++)
		{
			aux[j] = av[j];
		}
		printf("\n");
		av++;
	}
	return (aux);
}