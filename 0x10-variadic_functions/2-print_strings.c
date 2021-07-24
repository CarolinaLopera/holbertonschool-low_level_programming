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
	char *args2;
	unsigned int i;

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		args2 = va_arg(args, char *);
		if (args2 == NULL)
			printf("(nil)");
		else
			printf("%s", args2);
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
