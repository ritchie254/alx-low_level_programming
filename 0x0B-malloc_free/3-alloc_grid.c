#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  *alloc_grid - matrix
  *@width: width
  *@height: height
  *
  *Return: matrix
  */

int **alloc_grid(int width, int height)
{
	int i, j, **pGrid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	pGrid = (int **)malloc(sizeof(int *) * height);
	if (pGrid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		pGrid[i] = (int *)malloc(width * sizeof(int));
		if (pGrid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(pGrid[j]);
			}
			free(pGrid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			pGrid[i][j] = 0;
		}
	}
	return (pGrid);
}
