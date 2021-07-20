#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - check the code for Holberton School students.
 *
 * Return: Always void.
 * @d: is a new structur dog pointer.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	
	if (d == NULL)
		return (NULL);
}