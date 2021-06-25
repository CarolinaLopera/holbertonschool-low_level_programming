#include "holberton.h"
/**
* print_triangle - check the code for Holberton School students.
*
* Return: void.
* @size: is a variable int.
*/
void print_triangle(int size)
{
	int times;
	int lines;

	for (times = 1; times <= size; times++)
	{
		for (lines = size; lines >= 0; lines--)
		{
			if (times >= lines)
			{
				_putchar(35);
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		putchar('\n');
	}
}
