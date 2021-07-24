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
	va_list args;
	char *str;
	int i = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
