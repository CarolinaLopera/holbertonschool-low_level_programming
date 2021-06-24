#include "holberton.h"
/**
* print_square - check the code for Holberton School students.
*
* Return: void.
* @size: is a variable int.
*/
void print_square(int size)
{
	int times;
	int lines;

	for (times = 1; times <= size; times++)
	{
		for (lines = 1; lines <= size; lines++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
