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
	int i;

	if (width <= 0 || height <= 0)
	{
		printf("Error\n");
		return (NULL);
	}
	matriz = malloc((width * height) * sizeof(int));

	if (matriz == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= (width * height); i++)
	{
		matriz[i] = 0;
	}
	return (matriz);
}
