#include "holberton.h"
/**
 * is_prime_number - check the code for Holberton School students.
 *
 * Return: Always void.
 * @n: is a variable int.
 */
int is_prime_number(int n)
{
if (n == 1)
{
return (0);
}
if (n == 0)
{
return (0);
}
if (n < 0)
{
return (0);
}
if (n > 3 && (n % 2) == 0)
{
return (0);
}
else
{
return (1);
}
}
