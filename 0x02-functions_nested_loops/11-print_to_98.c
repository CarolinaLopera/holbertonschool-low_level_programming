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
	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
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
		for (int i = n; i >= 98; i--)
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
