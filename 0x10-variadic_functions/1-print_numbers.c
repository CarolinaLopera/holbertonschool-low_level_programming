#include "variadic_functions.h"
/**
 * print_numbers - print all arguments of the function.
 *
 * Return: Always void.
 * @separator: is a char pointer to separate the munbers (, );
 * @n: is a variable contsante unsigned int
 * indica el numero de args undefined.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_ar;
	unsigned int i;

	va_start(num_ar, n);

	for (i = 1; i <= n; i++)
	{
		printf("%i", va_arg(num_ar, int));
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num_ar);
}
