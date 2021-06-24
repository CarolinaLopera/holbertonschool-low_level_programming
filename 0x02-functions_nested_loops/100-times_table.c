#include "holberton.h"
/**
* print_times_table - check the code for Holberton School students.
*
* Return: int.
*
* @n: is a variable int.
*/
void print_times_table(int n)
{
	int multi1, multi2, result;

	for (multi1 = 0; multi1 <= 10; multi1++)
	{
		for (multi2 = 0; multi2 <= 10; multi2++)
		{
			result = multi1 * n;

			if (result < 10)
			{
				if (multi2 != 0)
				{
					_putchar(' ');
				}
				_putchar((result) + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (multi2 != 10)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
