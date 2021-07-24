#include "variadic_functions.h"
/**
 * print_all - print all arguments of the function.
 *
 * Return: Always void.
 * @format: is a char pointer contant;
 * indica el tipo de dato psado a la función.
 *
 */
void print_all(const char * const format, ...)
{
	char *data = "cifs";
	int i = 0, j;
	va_list args;

	va_start(args, format);

	while (data[i] != '\0')
	{
		j = 0;

		while (format[j] != '\0')
		{
			if (format[j] == data[i])
			{
			}
			j++;
		}
		i++;
	}
}
