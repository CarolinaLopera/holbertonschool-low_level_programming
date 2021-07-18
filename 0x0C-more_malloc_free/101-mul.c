#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _isnumber - check the code for Holberton School students.
*
* Return: 0 and 1.
* @c: is a int assi.
*/
int _isnumber(char *c)
{
	int i;

	for (i = 0; *c != '\0'; i++)
	{
		if (*c >= 48 && *c <= 57)
		{
			c++;
		}
		else
		{
			return (1);
		}
	}
	return (0);
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always int.
 * @argc: is a variable int.
 * @argv: is a variable char pointer.
 *
 */
int main(int argc, char *argv[])
{
	int mul1, mul2, i, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	mul1 = atoi(argv[1]);
	mul2 = atoi(argv[2]);

	for (i = 1; i < argc; i++)
	{
		if (_isnumber(argv[i]) == 1)
		{
			printf("Error\n");
			exit(98);
		}
	}
	result = mul1 * mul2;
	printf("%i\n", result);
	return (0);
}
