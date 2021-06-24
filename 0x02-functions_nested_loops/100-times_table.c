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
	int result = n * 10;
	int i = n;

	while (i <= result)
	{
		for (multi1 = 0; multi1 <= 10; multi1++)
		{
			multi2 = multi1 * n;

			if (multi2 < 10)
			{
				if (n != 0)
				{
					_putchar(' ');
				}
				_putchar((multi2) + '0');
			}
			else
			{
				_putchar((multi2 / 10) + '0');
				_putchar((multi2 % 10) + '0');
			}
			if (multi1 != 10)
			{
				_putchar(',');
				_putchar(' ');
			}
			i = multi2;
		}
		_putchar('\n');
	}
}
