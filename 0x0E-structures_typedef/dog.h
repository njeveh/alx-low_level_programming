#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct representing a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: a type holding a dog's data
 */

struct dog
{
	char *name;
	char *owner;
	int age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
