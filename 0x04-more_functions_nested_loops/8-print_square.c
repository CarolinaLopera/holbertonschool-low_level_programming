#include "holberton.h"
/**
* print_line - check the code for Holberton School students.
*
* Return: void.
* @n: is a variable int.
*/
void print_line(int n)
{
	int times;

	for (times = 1; times <= n; times++)
	{
		for (lines = 1; lines <= n; lines++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
