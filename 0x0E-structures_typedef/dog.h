#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a type to saves dogs
 * @name: is the name
 * @age: is the age
 * @owner: is the owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
