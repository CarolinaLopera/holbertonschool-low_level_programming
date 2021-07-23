#include "variadic_functions.h"
/**
 * sum_them_all - add all arguments of the function.
 *
 * Return: Always void.
 * @n: is a variable contsante unsigned int
 * indica el numero de args.
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num_ar;
	unsigned int i, result = 0;

	va_start(num_ar, n);

	if (n == 0)
		return (0);

	for (i = 1; i <= n; i++)
	{
		result += va_arg(num_ar, int);
	}
	va_end(num_ar);
	return (result);
}
