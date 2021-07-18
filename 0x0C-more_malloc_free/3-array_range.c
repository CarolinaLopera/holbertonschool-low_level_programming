#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - check the code for Holberton School students.
 *
 * Return: Always null or int pointer.
 *
 * @min: is a variable int.
 * @max: is a variable int.
 */
int *array_range(int min, int max)
{
	int *matriz;
	int i, j = 0;

	if (min > max)
		return (NULL);

	matriz = malloc((min + max + 1) * sizeof(int));

	if (matriz == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		matriz[j] = i;
		j++;
	}
	return (matriz);
}
