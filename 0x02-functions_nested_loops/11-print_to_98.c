#include "stdio.h"
/**
 * print_to_98 - check the code for Holberton School students.
 *
 * Return: void.
 *
 * @n: is a variable int.
 */
void print_to_98(int n)
{
	int i = n;

	if (n <= 98)
	{
		for (i; i <= 98; i++)
		{
			printf("%i", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n > 98)
	{
		for (i; i >= 98; i--)
		{
			printf("%i", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
