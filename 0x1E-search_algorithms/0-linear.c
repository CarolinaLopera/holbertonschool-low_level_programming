#include "search_algos.h"

/**
 * linear_search - Entry point
 *
 * @array: is a array of integer to serarch a value
 * @size: is the size of the array
 * @value: is the value to search in the array
 * Return: A integer find in the array or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
