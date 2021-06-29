#include "holberton.h"
/**
 * puts2 - check the code for Holberton School students.
 *
 * Return: viod.
 * @str: is a variable point declared.
 */
void puts2(char *str)
{
	int i = 0;

	while (i <= str[i])
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
