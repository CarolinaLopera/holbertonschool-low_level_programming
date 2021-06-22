#include "holberton.h"
/**
* print_alphabet_x10 - check the code for Holberton School students.
*
* Return: always void.
*
*/
void print_alphabet_x10(void)
{
	int abc = 97;
	int count = 0;

	while (count < 10)
	{
		while (abc <= 122)
		{
			_putchar(abc);
			abc++;
		}
		_putchar('\n');
		abc = 97;
		count++;
	}
}
