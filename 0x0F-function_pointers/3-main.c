#include "3-calc.h"
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
	int num1, num2, result;
	char *operator = NULL;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	result = get_op_func(operator)(num1, num2);

	printf("%d\n", result);
	return (0);
}
