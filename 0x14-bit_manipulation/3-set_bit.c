#include "main.h"
/**
 * set_bit - This function return the value of a bit at a given index.
 *
 * Return: Always int.
 * @n: Is a variable to print as binary.
 * @index: Indicate the position to return in binary.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux;
	(void)aux;

	if (index > 64)
		return (-1);

	aux = 1 << index;
	*n = (*n | aux);
	return (1);
}
