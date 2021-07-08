#include "holberton.h"
/**
 * _strlen_recursion - check the code for Holberton School students.
 *
 * Return: Always void.
 * @s: is a variable char*.
 *
 */
int _strlen_recursion(char *s)
{
int sum;
if (*s == '\0')
{
return (0);
}
else
{
s++;
sum = _strlen_recursion(s);
return (sum + 1);
}
}
