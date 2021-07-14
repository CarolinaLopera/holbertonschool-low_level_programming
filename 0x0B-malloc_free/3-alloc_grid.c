#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - check the code for Holberton School students.
 *
 * Return: pointer to pointer.
 * @width: is a variable int.
 * @height: is a variable int.
 */
int **alloc_grid(int width, int height)
{
	int **matriz;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	matriz = malloc((width * height) * sizeof(int));

	if (matriz == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			matriz[j] = 0;
		}
		matriz++;
	}
	return (matriz);
}
