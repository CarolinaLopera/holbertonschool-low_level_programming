#include "holberton.h"
/**
* print_diagonal - check the code for Holberton School students.
*
* Return: void.
* @n: is a variable int.
*/
void print_diagonal(int n)
{
	int times;

	for (times = 1; times <= n; times++)
	{
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
