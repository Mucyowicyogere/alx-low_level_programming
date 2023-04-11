#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*_strdup - to mem allocation
*@str: string
*Return: string
**/
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ar;
	bool kick = 1;
	i = 0;
	if (width <= 0)
	       return (NULL);
	if (height <= 0)
		return (NULL);
	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);
	while (i < height)
	{
		ar[i] = (int *) malloc(sizeof(int) * width);
		if (!ar[i])
		{
			kick = 0;
			break;
		}
		i++
	}
	if (!kick)
	{
		for (i = 0; i < height; i++)
		{
			if (ar[i])
			{
				free(ar[i]);
			}
		}
		free(ar);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
