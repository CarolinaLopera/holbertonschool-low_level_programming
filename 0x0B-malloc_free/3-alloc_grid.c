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
	matriz = malloc(height * sizeof(int));

	if (matriz == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		matriz[i] = malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
		{
			matriz[i][j] = 0;
		}
	}
	return (matriz);
}
