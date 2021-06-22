#include "holberton.h"
/**
* print_sign - check the code for Holberton School students.
*
* Return: 0 and 1.
* @n: is a int assi.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar(0);
		_putchar(',');
		_putchar(' ');
		return (0);
		_putchar('\n');
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
		_putchar('\n');
	}
}
