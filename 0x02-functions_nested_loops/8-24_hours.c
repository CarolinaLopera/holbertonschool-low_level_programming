#include "holberton.h"
/**
* jack_bauer - check the code for Holberton School students.
*
* Return: void.
*
*/
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
