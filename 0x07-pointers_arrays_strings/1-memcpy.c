#include "holberton.h"
/**
 * _memcpy - check the code for Holberton School students.
 *
 * Return: Always char*.
 * @dest: is a variable char*.
 * @src: is a variable char*.
 * @n: is a variable int unsigned.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

