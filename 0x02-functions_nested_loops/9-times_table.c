#include "holberton.h"
/**
* times_table - check the code for Holberton School students.
*
* Return: void.
*
*/
void times_table(void)
{
	int multi1, multi2, result;

	for (multi1 = 0; multi1 <= 9; multi1++)
	{
		for (multi2 = 0; multi2 <= 9; multi2++)
		{
			result = multi1 * multi2;

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
			if (multi2 != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
