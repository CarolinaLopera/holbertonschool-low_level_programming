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
	if (n >> index)
	{
		n >>= index;
		return (n & 1);
	}

	return (-1);
}
