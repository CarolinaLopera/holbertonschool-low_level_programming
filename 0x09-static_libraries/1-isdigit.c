#include "holberton.h"
/**
 * _isdigit - check the code for Holberton School students.
 *
 * Return: Always 0 and 1.
 * @c: is a variable int.
 */
int _isdigit(int c)
{
if (c > 47 && c < 58)
{
return (1);
}
else
{
return (0);
}
}
