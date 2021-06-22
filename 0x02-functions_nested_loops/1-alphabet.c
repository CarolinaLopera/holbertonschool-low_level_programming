#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
* print_alphabet - check the code for Holberton School students.
*
* Return: always void.
*
*/
void print_alphabet(void)
{
	int abc = 97;

	while (abc <= 122)
	{
		_putchar(abc);
		abc++;
	}
	_putchar('\n');
}
