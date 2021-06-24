#include "holberton.h"
/**
* print_most_numbers - check the code for Holberton School students.
*
* Return: void.
*
*/
void print_most_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
