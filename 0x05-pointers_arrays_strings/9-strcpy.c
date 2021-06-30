#include "holberton.h"
/**
 * *_strcpy - check the code for Holberton School students.
 *
 * Return: viod.
 * @dest: is a variable point declared.
 * @src: is a variable point declared.
 */
char *_strcpy(char *dest, char *src)
{
	int y;

	for (y = 0; y <= _strlen(src); y++)
	{
		dest[y] = src[y];
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

	return (i);
}
