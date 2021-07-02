#include "holberton.h"
/**
 * _strncat - check the code for Holberton School students.
 *
 * Return: Always char*.
 * @dest: is a variable char*.
 * @src: is a variable char*.
 * @n: is a variable int.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_src = _strlen(src);
	int len_dest = _strlen(dest);
	int i;
	
	for (i = 0; i <= (len_src + 1); i++)
	{
		if (dest == n || i > (len_src + 1))
		{
			break;
		}
		else
		{
			dest[i + (len_dest + 1)] = src[i];
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
