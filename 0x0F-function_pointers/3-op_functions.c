#include "3-calc.h"
/**
 * op_add - check the code for Holberton School students.
 *
 * Return: Always int.
 * @a: is a variable int.
 * @b: is a variable int.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - check the code for Holberton School students.
 *
 * Return: Always int.
 * @a: is a variable int.
 * @b: is a variable int.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - check the code for Holberton School students.
 *
 * Return: Always int.
 * @a: is a variable int.
 * @b: is a variable int.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - check the code for Holberton School students.
 *
 * Return: Always int.
 * @a: is a variable int.
 * @b: is a variable int.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}
/**
 * op_mod - check the code for Holberton School students.
 *
 * Return: Always int.
 * @a: is a variable int.
 * @b: is a variable int.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
