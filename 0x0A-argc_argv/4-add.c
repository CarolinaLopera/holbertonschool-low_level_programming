#include <stdio.h>
#include <stdlib.h>
int _isnumber(char *c);
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

			if ((var_atoi == 0 && *argv[i] != '0') || (_isnumber(argv[i]) == 1))
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
