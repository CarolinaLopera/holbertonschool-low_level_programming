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
	dog_t *nd, *aux;
	int i;

	nd = malloc(sizeof(dog_t));
	aux = malloc(sizeof(dog_t));

	if (nd == NULL || name == NULL || owner == NULL)
	{
		free(nd);
		return (NULL);
	}

	nd->name = malloc(*name * sizeof(char) + 1);
	if (nd->name == NULL)
		return (NULL);
	aux->name = malloc(*name * sizeof(char) + 1);

	nd->owner = malloc(*owner * sizeof(char) + 1);
	if (nd->owner == NULL)
		return (NULL);
	aux->owner = malloc(*owner * sizeof(char) + 1);

	for (i = 0; name[i] != '\0'; i++)
	{
		nd->name[i] = name[i];
		aux->name[i] = name[i];
	}

	nd->age = age;

	for (i = 0; owner[i] != '\0'; i++)
	{
		nd->owner[i] = owner[i];
		aux->owner[i] = owner[i];
	}

	return (nd);
}
