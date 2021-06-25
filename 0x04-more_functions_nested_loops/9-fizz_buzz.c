#include "holberton.h"
#include <stdio.h>
/**
* main - check the code for Holberton School students.
*
* Return: void.
*
*/
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%i", n);
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
