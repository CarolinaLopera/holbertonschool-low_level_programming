#include "holberton.h"
/**
 * _strncpy - check the code for Holberton School students.
 *
 * Return: Always char*.
 * @s: is a variable char*.
 * @accept: is a variable char*.
 */
char *_strpbrk(char *s, char *accept)
{
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
        if (s[i] == accept[j])
        {
            return (&s[i]);
        }
        }
    }
    return ('\0');
}
