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
int i, *j= &size;
int *k = &i;
int acu, acu2;

for (i = 0; i < size; i++)
{
    acu = a[i][k] + acu;
    acu2 = a[i][j] + acu2;
    j--;
    k++;
}

printf("%d, %d\n", acu, acu2);
}
