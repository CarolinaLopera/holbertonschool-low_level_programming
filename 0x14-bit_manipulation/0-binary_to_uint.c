#include "main.h"
/**
 * binary_to_uint - This function convert a binary to decimal.
 *
 * Return: Always int.
 * @b: Is a variable char pointer.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, num;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);

		num = b[i] - 48;
		result = (result * 2) + num;
	}
	return (result);
}
