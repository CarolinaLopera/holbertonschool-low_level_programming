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
	int spaces;

	for (times = 1; times <= n; times++)
	{
		_putchar(92);

		if (times < n)
		{
			_putchar('\n');

			for (spaces = 1; spaces <= times; spaces++)
			{
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
