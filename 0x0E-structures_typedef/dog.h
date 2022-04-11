#ifndef DOG_H
#define DOG_H

int _putchar(char c);

/**
 * struct dog - a dog's representation
 * @name: the dog's name
 * @age: the dog's age
 * @owner: The dog's owner
 *
 * Description: a structure containimg a dog's data
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
