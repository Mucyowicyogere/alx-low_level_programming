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
	char *ar;
	int i;
	if (size == 0)
                return NULL;
        ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return NULL;	
	i = 0;
	while (i <(int) size)
	{
		ar[i] = c;
		i++;
	}
	ar[i] = '\0';
}
