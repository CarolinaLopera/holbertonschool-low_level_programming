#include "function_pointers.h"
/**
 * array_iterator - check the code for Holberton School students.
 *
 * Return: Always void.
 * @size: is a variable size.
 * @array: is variable pointer char.
 * @action: pointer to function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
