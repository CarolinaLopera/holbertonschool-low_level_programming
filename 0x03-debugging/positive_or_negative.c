#include <stdio.h>
#include "holberton.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i= 0;

	if (i > 0)
	{
	printf("%i is positive\n", i);
	}
	else if (i == 0)
	{
	printf("%i is zero\n", i);
	}
	else if (i < 0)
	{
	printf("%i is negative\n", i);
	}
	return (0);
}
