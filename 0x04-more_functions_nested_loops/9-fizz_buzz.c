#include <stdio.h>
/**
* main - check the code for Holberton School students.
*
* Return: void.
*
*/
void main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if (3 % n == 0 && 5 % n == 0)
		{
			printf("FizzBuzz");
		}
		else if (5 % n == 0)
		{
			printf("Buzz");
		}
		else if (3 % n == 0)
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
}
