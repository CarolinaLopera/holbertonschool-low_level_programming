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
	int i, j;
	int **matriz = malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (matriz == NULL)
	{
		free(matriz);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matriz[i] = malloc(width * sizeof(int));

		if (matriz[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(matriz[j]);
			}
			free(matriz);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			matriz[i][j] = 0;
		}
	}
	return (matriz);
}
