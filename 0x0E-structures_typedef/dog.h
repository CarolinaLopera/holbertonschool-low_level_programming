#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - check the code for Holberton School students.
 *
 * Return: Always void.
 * @name: is a variable char pointer of structur dog.
 * @age: is a variable float of structur dog.
 * @owner: is a variable char pointer of structur dog.
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
