#include "holberton.h"
/**
 * rev_string - check the code for Holberton School students.
 *
 * Return: viod.
 * @s: is a variable point declared.
 */
void rev_string(char *s)
{
	int end;
	int i = 0, y = 0;
	int ini = _strlen(s) - 1;
	char otro[1000];

	for (y = 0; y <= (ini + 1); y++)
	{
		otro[y] = s[y];
	}

	for (end = ini; end >= 0; end--)
	{
		s[i] = otro[end];
		i++;
	}
}
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
