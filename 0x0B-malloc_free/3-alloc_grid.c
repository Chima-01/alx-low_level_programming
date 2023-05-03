#include "main.h"

/**
 * alloc_grid - This function returns a pointer
 * to a 2 dimensional array of integers.
 * @width: Row of array
 * @height:Column of array
 * Return: 2 dimesional array of int
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
	matrix[i] = malloc(sizeof(int) * width);
	if (matrix[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
			free(matrix[j]);
		}
			free(matrix);
			return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		matrix[i][j] = 0;
	}
	}
		return (matrix);
}
