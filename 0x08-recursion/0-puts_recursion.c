#include "holberton.h"
/**
 * _puts_recursion - check the code for Holberton School students.
 *
 * Return: Always void.
 * @s: is a variable char*.
 *
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
s++;
}

if (*s != '\0')
{
_puts_recursion(s);
}
else
{
_putchar('\n');
}
}
