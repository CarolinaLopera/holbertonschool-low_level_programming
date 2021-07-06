#include "holberton.h"
/**
 * _strchr - check the code for Holberton School students.
 *
 * Return: Always char*.
 * @s: is a variable char*.
 * @c: is a variable char.
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return ("NULL");
}
