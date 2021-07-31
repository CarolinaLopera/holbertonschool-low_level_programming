#include <stdio.h>
#include "lists.h"
/**
 * print_list - check the code for Holberton School students.
 *
 * Return: Always size_t.
 * @c: is a variable double of structur complex.
 */
size_t print_list(const list_t *h)
{
    size_t i = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%i] %s\n", h->len, h->str);
        h = h->next;
        i++;
    }
    return (i);
}
