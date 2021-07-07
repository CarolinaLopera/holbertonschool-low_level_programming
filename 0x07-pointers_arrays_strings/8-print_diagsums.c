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
int i, j = 0, k = 0;
int acu = 0, acu2 = 0;

for (i = 0; i < size * size; i++)
{ 
    if(i == (size*j)+j)
    {
        acu=acu+a[i]; 
        j++;
    }
    if(i == (size*k)-k)
    {
        if(((size*size)-1) != ((size*k)-k)){
            if(i!=0){
              acu2=acu2+a[i];  
            }
            k++;
        }
    }
}

printf("%d, %d\n", acu, acu2);
}
