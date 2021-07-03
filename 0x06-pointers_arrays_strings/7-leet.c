#include "holberton.h"
/**
 * leet - check the code for Holberton School students.
 *
 * Return: Always char*
 * @str: is a variable char*.
 *
 */
char *leet(char *str)
{
	char *let = "aAeEoOtTlL";
	char *num = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (let[j] == str[i])
			{
				str[i] = num[j];
			}
		}
	}
	return (str);
}
