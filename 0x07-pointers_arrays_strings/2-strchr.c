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
int len = _strlen(s);

for (i = 0; i <= len; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return ('\0');
}
/**
 * _strlen - check the code for Holberton School students.
 *
 * Return: viod.
 * @s: is a variable point declared.
 */
int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
}

return (i);
}
