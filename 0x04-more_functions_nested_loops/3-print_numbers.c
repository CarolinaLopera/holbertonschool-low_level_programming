#include "holberton.h"
/**
 * print_numbers - check the code for Holberton School students.
 *
 * Return: void.
 *
 */
void print_numbers(void)
{
	int numbers;

	for (numbers = 48; numbers <= 57; numbers++)
	{
		_putchar(numbers);
	}
	_putchar('\n');
}
