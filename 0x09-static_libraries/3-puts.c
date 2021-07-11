#include "holberton.h"
/**
 * _puts - check the code for Holberton School students.
 *
 * Return: viod.
 * @str: is a variable point declared.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
