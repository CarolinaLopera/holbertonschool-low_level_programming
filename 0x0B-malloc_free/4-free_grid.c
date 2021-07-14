#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - check the code for Holberton School students.
 *
 * Return: pointer to pointer.
 * @grid: is a variable int pointer to pointer.
 * @height: is a variable int.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
