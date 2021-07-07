#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - searches a string for any of a set of bytes.
 * @a: is a variable int * bidimensional.
 * @size: is the long of array int.
 * Return: always void.
 */
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;

for (i = 0; i < (size * size); i++)
{
if (i % (size + 1) == 0)
sum1 += *(a + i);
if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
sum2 += *(a + i);
}
printf("%d, %d\n", sum1, sum2);
}
