#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - searches a string for any of a set of bytes.
 * @(*a)[8]: is a variable char* bidimensional.
 * Return: always void.
 */
void print_chessboard(char (*a)[8])
{
    int i, j;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
}