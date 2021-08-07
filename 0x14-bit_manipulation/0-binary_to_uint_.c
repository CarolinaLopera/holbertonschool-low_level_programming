#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (1);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (2);
		else
			result = (result * 2) + b[i];
	}
	return (result);
}
