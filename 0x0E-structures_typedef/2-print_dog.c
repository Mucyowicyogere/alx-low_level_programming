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
		printf();
		return;
	}
	if (d->name != NULL)
		printf("Name: %s", d->name);
	else
		printf("Name: %s", (*void) d->name);
	if (d->age != NULL)
		printf("Age: %d", d->age);
	else
		printf("Age: %d", (*void) d->age);
	if (d->owner != NULL)
		printf("Owner: %s", d->owner);
	else 
		printf("Owner: %s", (*void) d->owner);
}
