#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: is the strcture
 * @name: is the name
 * @age: is the age
 * @owner: is the owner
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
