#include "holberton.h"
/**
 * _print_rev_recursion - check the code for Holberton School students.
 *
 * Return: Always void.
 * @s: is a variable char*.
 *
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
s--;
}
else
{
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
}
