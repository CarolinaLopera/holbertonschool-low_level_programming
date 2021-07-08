#include "holberton.h"
/**
 * _pow_recursion - check the code for Holberton School students.
 *
 * Return: Always void.
 * @x: is a variable int.
 * @y: is a variable int.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}

int temp = 0, div;
div = n / 2;

if (div != temp)
{
    temp = div;
    div = _sqrt_recursion(n / temp + temp);
    return (div / 2);
}

else
{
n--;
return (n);
}
}
