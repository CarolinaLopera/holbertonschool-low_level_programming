#include "holberton.h"
/**
 * _strcmp - check the code for Holberton School students.
 *
 * Return: Always int.
 * @s1: is a variable char*.
 * @s2: is a variable char*.
 *
 */
int _strcmp(char *s1, char *s2)
{
	int len_s1 = _strlen(s1);
	int len_s2 = _strlen(s2);
	int i, result;

	for (i = 0; i <= len_s1; i++)
	{
		if (s1[i] == s2[i])
		{
			result = 0;
		}
		else
		{
			result = s1[i] - s2[i];
			break;
		}
	}
	return (result);
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
