#include "holberton.h"
#include <stdio.h>

int main(void)
{
    char *s = "hola";
    char *f;

    f = _strchr(s, '\0');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}