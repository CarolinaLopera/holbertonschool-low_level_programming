#include "variadic_functions.h"
/**
 * print_strings - print variadics arguments string.
 *
 * Return: Always void.
 * @separator: is a char pointer to separate the munbers (, );
 * @n: is a variable contsante unsigned int
 * indica el numero de args undefined.
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		printf("%s", va_arg(args, char*));
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
