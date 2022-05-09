#include "main.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to a dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	char *str = "nil";

	if (d != NULL)
	{
		printf("Name: %s\n", d->name == NULL ? str : d->name);
		if (d->age == NULL)
			printf("Age: %s\n", str);
		else
			printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner == NULL ? str : d->owner);
	}
}
