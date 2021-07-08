#include "holberton.h"
/**
 * _pow_recursion - check the code for Holberton School students.
 *
 * Return: Always void.
 * @x: is a variable int.
 * @y: is a variable int.
 */
int _pow_recursion(int x, int y)
{
int aux;
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}

if (y == 1)
{
return (x);
}

else
{
y--;
aux = _pow_recursion(x, y);
return (x * aux);
}
}
