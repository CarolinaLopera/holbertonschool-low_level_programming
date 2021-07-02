#include "holberton.h"
/**
 * _strncpy - check the code for Holberton School students.
 *
 * Return: Always char*.
 * @dest: is a variable char*.
 * @src: is a variable char*.
 * @n: is a variable int.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len_src = _strlen(src);
	int i;

	for (i = 0; i < n; i++)
	{
		if (i >= (len_src + 1))
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[i];
		}
	}

	return (dest);
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
	i--;

	return (i);
}
