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
		_putchar(95);
	}
	_putchar('\n');
}
