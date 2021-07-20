#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - check the code for Holberton School students.
 *
 * Return: Always void.
 * @d: is a new structur dog pointer.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
