#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - check the code for Holberton School students.
 *
 * Return: Always void.
 * @d: is a new structur dog pointer.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
	}
}
