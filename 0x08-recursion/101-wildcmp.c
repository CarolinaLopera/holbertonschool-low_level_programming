#include "holberton.h"
/**
 * wildcmp - check the code for Holberton School students.
 *
 * Return: Always int.
 * @s1: is a variable char*.
 *
 * @s2: is a variable char*.
 */
int wildcmp(char *s1, char *s2)
{
  if (*s1 == *s2 || *s2 == '*')
  {
    if (*s1 == '\0' && (*s2 == '\0' || *s2 == '*'))
    {
      return (1);
      }
      s1++;
      s2++;
      wildcmp(s1, s2);
  }
  else
    return (0);
}