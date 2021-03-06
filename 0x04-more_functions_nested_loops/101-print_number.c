#include "holberton.h"
#include <limits.h>
/**
* print_number - This function print a number integer.
*
* Return: void.
* @n: is the number to print.
*/
void print_number(int n)
{
	if (n < 0 && n != INT_MIN)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
