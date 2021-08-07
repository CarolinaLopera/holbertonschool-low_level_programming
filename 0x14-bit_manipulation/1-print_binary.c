#include "main.h"
/**
 * print_binary - This function print a binary.
 *
 * Return: Always void.
 * @n: Is a variable to print as binary.
 */
void print_binary(unsigned long int n)
{
	int i, bool = 0;

	if (n == 0)
		_putchar('0');

	for (i = 63; i >= 0 ; i--)
	{
		if ((n >> i) & 1)
			bool = 1;

		if (bool == 1)
		{
			if ((n >> i) & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
