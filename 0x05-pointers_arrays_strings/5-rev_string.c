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
	int ini = _strlen(s) -1;
	char *o = s;

	for (end = ini; end >= 0; end--)
	{
		o[end] = s[ini];
		end--;
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
