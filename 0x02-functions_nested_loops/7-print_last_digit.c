#include "holberton.h"
/**
* print_last_digit - check the code for Holberton School students.
*
* Return: 0 and 1.
* @num: is a variable int
*/
int print_last_digit(int num)
{
	int last_num = num % 10;

	if (num > 0)
	{
		_putchar((num % 10) + '0');
	}
	else if (num < 0)
	{
		_putchar('-');
		_putchar(num % 10 + '0');
	}
	else if (num == 0)
	{
		_putchar(num + '0');
		return (0);
	}
	return (last_num);
}
