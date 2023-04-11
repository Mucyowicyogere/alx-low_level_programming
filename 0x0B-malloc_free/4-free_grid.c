#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*free_grid - to free
*@grid: int
*Return: int
**/
void free_grid(int **grid, int height)
{
	int x;
	
	x = 0;
	while (x < height)
	{
		if (grid[x] != NULL)
		{
			free(grid[x]);
		}
		x++;
	}

	free(grid);
}
