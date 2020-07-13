#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: is the name of the new dog
 * @age: is the age of the new dog
 * @owner: is the owner of the new dog
 * Return: NULL if the functions fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
