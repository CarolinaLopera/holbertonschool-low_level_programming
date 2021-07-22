#include "function_pointers.h"
/**
 * int_index - check the code for Holberton School students.
 *
 * Return: Always int.
 * @size: is a variable size.
 * @array: is variable pointer char.
 * @cmp: pointer to function.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}
