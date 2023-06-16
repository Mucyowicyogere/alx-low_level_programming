#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
*malloc_checked - to allocate memory
*@b: byte size
*Return: void
**/
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p != NULL)
		return (p);
	return (NULL);
}
