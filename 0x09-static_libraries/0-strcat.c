#include "holberton.h"
/**
 * _strcat - check the code for Holberton School students.
 *
 * Return: Always char*.
 * @dest: is a variable char*.
 * @src: is a variable char*.
 */
char *_strcat(char *dest, char *src)
{
	int len_src = _strlen(src);
	int len_dest = _strlen(dest);
	int i;

	for (i = 0; i <= (len_src + 1); i++)
	{
		dest[i + (len_dest + 1)] = src[i];
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
