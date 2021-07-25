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
	char *str, *separator = ", ", *types = "cifs";
	int i = 0, bool = 0, j;

	va_start(args, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (types[j] != '\0')
		{
			if ((format[i] == types[j]) && bool != 0)
			{
				printf("%s", separator);
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int)), bool = 1;
			break;
		case 'i':
			printf("%i", va_arg(args, int)), bool = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double)), bool = 1;
			break;
		case 's':
			str = va_arg(args, char *), bool = 1;
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n");
	va_end(args);
}
