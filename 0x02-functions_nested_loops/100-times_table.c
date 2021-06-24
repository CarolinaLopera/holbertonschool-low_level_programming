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
	int multi1, multi2;
	int result;

	for (multi1 = 0; multi1 <= n; multi1++)
	{
		for (multi2 = 0; multi2 <= n; multi2++)
		{
			result = multi2 * multi1;

			if (result < 10)
			{
				if (n != 0)
				{
					_putchar(' ');
				}
				_putchar((multi2) + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (multi1 != 10)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
