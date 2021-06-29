#include "holberton.h"
/**
 * print_rev - check the code for Holberton School students.
 *
 * Return: viod.
 * @s: is a variable point declared.
 */
void print_rev(char *s)
{
	int end;
	int ini = _strlen(s) - 1;

	for (end = ini; end >= 0; end--)
	{
		_putchar(s[end]);
	}
	_putchar('\n');
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
