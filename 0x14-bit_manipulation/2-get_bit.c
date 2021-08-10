#include "main.h"
/**
 * get_bit - This function return the value of a bit at a given index.
 *
 * Return: Always int.
 * @n: Is a variable to print as binary.
 * @index: Indicate the position to return in binary.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int aux;

	if (index > 64)
		return (-1);

	aux = n >> index;
	return (aux & 1);
}
