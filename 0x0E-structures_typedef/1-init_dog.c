#include "dog.h"
#include <stdlib.h>
#include<stddef.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to a struct dog
 * @name: character pointer to the dog name
 * @age: float value for dog's age
 * @owner: character pointer to the dog's owner name
 *
 * Retrun:void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *new_dog = malloc(sizeof(*new_dog));

	if (new_dog == NULL)
		exit(1);
	new_dog->name = *name;
	new_dog->age = age;
	new_dog->owner = *owner;
}
