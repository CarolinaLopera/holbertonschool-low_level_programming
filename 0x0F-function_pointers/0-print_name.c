#include "function_pointers.h"
/**
 * f - check the code for Holberton School students.
 *
 * Return: Always void.
 * @name: is a variable char pointer.
 */
void f(char *name)
{
	int i;

	for (i = 0; name[i] != '\0'; i++)
	{
		_putchar(name[i]);
	}
}
/**
 * print_name - check the code for Holberton School students.
 *
 * Return: Always void.
 * @name: is a variable char pointer.
 * @f: is pointers function.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
