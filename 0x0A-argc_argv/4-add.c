#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always int.
 * @argc: is a variable int.
 * @argv: is a variable char*.
 *
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		int result = 0, i;

		for (i = 1; i < argc; i++)
		{
			int var_atoi = atoi(argv[i]);

			if (var_atoi == 0 && *argv[i] != '0')
			{
				printf("Error\n");
				return (1);
			}

			result += var_atoi;
		}
		printf("%i\n", result);
	}
	return (0);
}
