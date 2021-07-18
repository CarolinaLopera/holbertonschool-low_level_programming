#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - check the code for Holberton School students.
 *
 * Return: Always null or char pointer.
 *
 * @ptr: is a pointer to memory.
 * @old_size: is a variable unsigned int.
 * @new_size: is a variable unsigned int.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}

	ptr = malloc(new_size);

	/*if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}*/
	return (ptr);
}
