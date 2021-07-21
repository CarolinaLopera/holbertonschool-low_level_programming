#include "function_pointers.h"
/**
 * print_name - check the code for Holberton School students.
 *
 * Return: Always void.
 * @name: is a variable char pointer.
 * @f: is pointers function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f == NULL)
		f(name);
}
