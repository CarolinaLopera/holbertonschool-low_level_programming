#include "holberton.h"
/**
* times_table - check the code for Holberton School students.
*
* Return: void.
*
*/
void times_table(void)
{
	int table = 0;

	while (table <= 90)
	{
		_putchar((table % 10) + '0');
		_putchar(',');
		_putchar(' ');
		table = table + 9;
	}
	_putchar('\n');
}
