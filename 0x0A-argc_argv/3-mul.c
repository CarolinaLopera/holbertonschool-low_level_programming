#include <stdio.h>
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
	if (argc == 3)
	{
		int num1 = *argv[1] - '0';
		int num2 = *argv[2] - '0';
		int result = num1 * num2;
		printf("%i\n", result);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}