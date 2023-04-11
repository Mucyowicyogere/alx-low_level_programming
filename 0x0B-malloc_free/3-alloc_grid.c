#include <stdlib.h>
#include "main.h"
/**
*alloc_grid - 2D array
*@width: int
*@height: int
*Return: int
**/
int **alloc_grid(int width, int height)
{
	int i, kick, j;
	int **ar;
	kick = 1;
	i = 0;

	if (height <= 0 || width <= 0 || ar == NULL)
		return (NULL);
	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);
	while (i < height)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (!ar[i])
		{
			kick = 0;
			break;
		}
		i++;
	}
	if (kick == 0)
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
