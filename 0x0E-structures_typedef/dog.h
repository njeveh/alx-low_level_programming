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
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dot_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
void free_dog(dog_t *d);

#endif /* DOG_H */
