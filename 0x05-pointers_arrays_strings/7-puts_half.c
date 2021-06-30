#include "holberton.h"
/**
 * puts_half - check the code for Holberton School students.
 *
 * Return: viod.
 * @str: is a variable point declared.
 */
void puts_half(char *str)
{
	int length = _strlen(str) - 1;
	int divided = length / 2;
	int i;

	for (i = divided + 1; i <= length; i++)
	{
		_putchar(str[i]);
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
