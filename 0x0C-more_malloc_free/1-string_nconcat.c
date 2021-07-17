#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
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
 * string_nconcat - check the code for Holberton School students.
 *
 * Return: Always null or char pointer.
 * @s1: is a variable char*.
 * @s2: is a variable char*.
 * @n: is a variable unsigned int.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);
	unsigned int i, j = len1;
	char *aux;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	aux = malloc((len1 + len2 + 1) * sizeof(char));
	if (aux == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		aux[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		if (i >= len2)
			break;

		if (len2 != i)
		{
			aux[j] = s2[i];
			j++;
		}
	}
	aux[j + i] = '\0';
	return (aux);
}
