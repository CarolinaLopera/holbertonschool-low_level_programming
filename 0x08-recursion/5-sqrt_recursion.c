#include "holberton.h"
/**
 * root - check the code for Holberton School students.
 *
 * Return: Always int.
 * @n: is a variable int.
 * @y: is a variable int.
 */
int root(int n, int y)
{
if (n == (y * y))
{
return (y);
}
if (y > (n / 2))
{
return (-1);
}
y++;
return (root(n, y));
}
/**
 * _sqrt_recursion - check the code for Holberton School students.
 *
 * Return: Always int.
 * @n: is a variable int.
 */
int _sqrt_recursion(int n)
{

if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
if (n == 0)
{
return (0);
}

return (root(n, 2));
}
