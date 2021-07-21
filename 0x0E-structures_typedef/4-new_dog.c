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
	dog_t *nd;
	int i;
	nd = malloc(sizeof(dog_t));
	
	if (nd == NULL)
		return (NULL);

	nd->name = malloc(*name * sizeof(char));
	if (nd->name == NULL)
		return (NULL);
	
	nd->owner = malloc(*owner * sizeof(char));
	if (nd->owner == NULL)
		return (NULL);
	
	for (i = 0; name[i] != '\0'; i++)
		nd->name[i] = name[i];
	
	nd->age = age;

	for (i = 0; owner[i] != '\0'; i++)
		nd->owner[i] = owner[i];

	return (nd);
}
