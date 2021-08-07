#include "main.h"
/**
 * print_binary - This function print a binary.
 *
 * Return: Always void.
 * @n: Is a variable to print as binary.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value = n >> index;

	if (value)
 		return (value);

	return (-1);
}
