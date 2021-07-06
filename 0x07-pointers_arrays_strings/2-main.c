#include "holberton.h"
#include <stdio.h>

int main(void)
{
    char *s = "hola";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}