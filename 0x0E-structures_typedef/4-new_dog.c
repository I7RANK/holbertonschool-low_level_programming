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
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(name) + 1);
	if (new_dog->name == NULL)
		return (NULL);

	new_dog->owner = malloc(sizeof(owner) + 1);
	if (new_dog->owner == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
