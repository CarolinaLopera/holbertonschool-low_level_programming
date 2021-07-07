#include "holberton.h"
/**
 * _strstr - searches a string for any of a set of bytes.
 * @haystack: is a variable char*.
 * @needle: is a variable char*.
 * Return: always char*.
 */
 char *_strstr(char *haystack, char *needle)
{
int i, j = 0;

for (i = 0; haystack[i] != '\0'; i++)
{
while (needle[j] && (haystack[i] == needle[0]))
{
if (haystack[i + j] == needle[j])
j++;
else
{
break;
}
}

if (needle[j])
{
j = 0;
}
else
{
return (haystack + i);
}
}
return ('\0');
}