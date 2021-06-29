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

	while (str[i] == '\0' || str[i] != '\0')
	{
		if (str[i] == '\0')
		{
			break;
		}
		else if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
