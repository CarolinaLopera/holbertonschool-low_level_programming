#include "holberton.h"
/**
* times_table - check the code for Holberton School students.
*
* Return: void.
*
*/
void times_table(void)
{
	int multi1, multi2;

	for (multi1 = 0; multi1 <= 9; multi1++)
	{
		for (multi2 = 0; multi2 <= 9; multi2++)
		{
			_putchar((multi1 * multi2) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
		}
	}
}
