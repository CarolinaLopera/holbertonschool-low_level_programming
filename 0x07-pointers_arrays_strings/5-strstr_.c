#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - searches a string for any of a set of bytes.
 * @haystack: is a variable char*.
 * @needle: is a variable char*.
 * Return: always char*.
 */
 char *_strstr(char *haystack, char *needle)
{
    int i, j = 0;
    char *aux;

    for (i = 0; haystack[i] != '\0'; i++)
    {
        printf("entró\n");
        if (needle[j] == '\0')
        {
            printf("entró if 1\n");
            return (aux);
        }
        if (haystack[i] == needle[j] && j == 0)
        {
            printf("entró if 2\n");
            aux = &haystack[i];
            j++;
        }
        else if (j > 0)
        {
            printf("entró else if 1\n");
            aux = '\0';
            j = 0;
        }
        else if (haystack[i] == needle[j])
        {
            printf("entró else if 2\n");
            j++;
        }
    }
    return ('\0');
}