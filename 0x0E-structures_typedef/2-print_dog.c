#include <stdio.h>
#include "dog.h"

/**
 * print_dog -print dog struct
 * @d: struct to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("Name: %s", d->name);
	printf("Age: %d", d->age);
	printf("Owner: %s", d->owner);
}
