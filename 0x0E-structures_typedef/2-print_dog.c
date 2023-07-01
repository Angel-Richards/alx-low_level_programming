#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/*
 * print_dog - prints struct dog
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
	if (d->age == NULL)
		d->age = "(nil)";
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	if (d == NULL)
		return;

	printf("Age: %f\nName: %s\nOwner: %s\n", d->age, d->name, d->owner);
}
