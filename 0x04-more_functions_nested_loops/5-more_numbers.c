#include "holberton.h"
/**
* more_numbers - check the code for Holberton School students.
*
* Return: void.
*
*/
void more_numbers(void)
{
	int count;
	int num;

	for (count = 1; count <= 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
