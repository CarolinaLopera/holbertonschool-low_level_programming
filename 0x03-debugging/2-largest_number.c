#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	pr_int(largest);
	return (largest);
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
