#include "holberton.h"
/**
 * _memset - check the code for Holberton School students.
 *
 * Return: Always char*.
 * @s: is a variable char*.
 * @b: is a variable char.
 * @n: is a variable int unsigned.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
