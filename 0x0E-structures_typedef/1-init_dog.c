#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to a struct dog
 * @name: character pointer to the dog name
 * @age: float value for dog's age
 * @owner: character pointer to the dog's owner name
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
