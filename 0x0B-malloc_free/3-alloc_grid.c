#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **two_dimens;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	two_dimens = malloc(height * sizeof(int *));
	if (two_dimens == NULL)
	{
		free(two_dimens);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		two_dimens[i] = malloc(width * sizeof(int));
		if (two_dimens[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(two_dimens[i]);
			free(two_dimens);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			two_dimens[i][j] = 0;

	return (two_dimens);
}
