#include "holberton.h"
/**
 * _isupper - check the code for Holberton School students.
 *
 * Return: Always 0 and 1.
 * @c: is a variable int.
 */
int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
