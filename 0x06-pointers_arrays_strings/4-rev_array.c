#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 *
 * Return: Always int.
 * @a: is a variable poiner int.
 * @n: is a variable int.
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, k = 0;
	int aux[500];

	for (j = 0; j <= n; j++)
	{
		aux[j] = a[j];
	}

	for (i = (n - 1); i >= 0; i--)
	{
		a[k] = aux[i];
		k++;
	}
}
