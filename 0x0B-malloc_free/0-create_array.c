#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
*create_array - to create array
*@size: array size 
*@c: character
**/
char *create_array(unsigned int size, char c)
{
	if (size == 0)
                return NULL;
	char *ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return NULL;	
	int i = 0;
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	ar[i] = '\0';
}
