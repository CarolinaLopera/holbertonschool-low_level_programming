#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - check the code for Holberton School students.
 *
 * Return: Always void.
 * @name: is a variable char pointer of structur dog.
 * @age: is a variable float of structur dog.
 * @owner: is a variable char pointer of structur dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	int i;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL || name == NULL || owner == NULL)
	{
		free(nd);
		return (NULL);
	}

	nd->name = malloc(*name * sizeof(char));
	nd->owner = malloc(*owner * sizeof(char));
	if (nd->name == NULL || nd->owner == NULL)
	{
		free(nd->name);
		free(nd->owner);
		free(nd);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		nd->name[i] = name[i];
	nd->name[i] = '\0';

	nd->age = age;

	for (i = 0; owner[i] != '\0'; i++)
		nd->owner[i] = owner[i];
	nd->owner[i] = '\0';

	return (nd);
}
