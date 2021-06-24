#include "holberton.h"
void pr_int(int n);
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

	for (multi1 = 0; multi1 <= n && n < 16; multi1++)
	{
		for (multi2 = 0; multi2 <= n; multi2++)
		{
			result = multi2 * multi1;

			if (result < 10)
			{
				if (multi2 != 0)
				{
					_putchar(' ');
				}
				_putchar((result) + '0');
			}
			else if (result > 99)
			{
				pr_int(result);
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (multi2 < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
/**
* pr_int - check the code for Holberton School students.
*
* Return: int.
*
* @n: is a variable int.
*/
void pr_int(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		pr_int(n / 10);
	_putchar((n % 10) + '0');
}
