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
 * str_concat - check the code for Holberton School students.
 *
 * Return: Always null or char pointer.
 * @s1: is a variable char*.
 * @s2: is a variable char*.
 *
 */
char *str_concat(char *s1, char *s2)
{
	if (*s1 == NULL)
	{
		s1[0] = "";
	}
	if (*s2 == NULL)
	{
		s2[0] = "";
	}
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	int i, j = len1;
	char *aux = malloc((len1 + len2 + 1) * sizeof(char));

	if (aux == NULL)
	{
		return ('\0');
	}

	for (i = 0; i < len1; i++)
	{
		aux[i] = s1[i];
	}
	for (i = 0; i <= len2; i++)
	{
		aux[j] = s2[i];
		j++;
	}
	return (aux);
}
