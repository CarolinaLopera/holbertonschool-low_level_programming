#include <stdio.h>
#include <stdlib.h>
/**
 * _convert - check the code for Holberton School students.
 *
 * Return: Always int.
 * @n: is a variable int.
 *
 */
int _convert(int n)
{
	int result;

	if (n >= 25)
	{
		result = n / 25;
		if ((n % 25) != 0)
			return (result + _convert(n % 25));
		return (result);
	}
	else if (n >= 10)
	{
		result = n / 10;
		if ((n % 10) != 0)
			return (result + _convert(n % 10));
		return (result);
	}
	else if (n >= 5)
	{
		result = n / 5;
		if ((n % 5) != 0)
			return (result + _convert(n % 5));
		return (result);
	}
	else if (n >= 2)
	{
		result = n / 2;
		if ((n % 2) != 0)
			return (result + _convert(n % 2));
		return (result);
	}
	else if (n >= 1)
	{
		result = n / 1;
		if ((n % 1) != 0)
			return (result + _convert(n % 1));
		return (result);
	}
	return (0);
}

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
	if (argc == 2)
	{
		int value = atoi(argv[1]);

		printf("%i\n", _convert(value));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
