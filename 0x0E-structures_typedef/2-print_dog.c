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
	if (d == NULL)
		return;
	char *str = "nil";
	printf("Name: %s\n", d->name == NULL ? str : d->name);
	d->age == NULL ? printf("Age: %s\n", str) : printf("Age: %d\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? str : d->owner);
}
