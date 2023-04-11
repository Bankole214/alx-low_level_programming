#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that retirn a pointer to a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NULL if width or height is negative or 0.
 */
int **alloc_grid(int width, int height)
{
	int **leo;
	int a;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);

	leo = malloc(sizeof(int *) * height);

	if (leo == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		leo[a] = malloc(sizeof(int) * width);

		if (leo[a] == NULL)
		{
			for (; a >= 0; a--)
				free(leo[a]);

			free(leo);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			leo[a][b] = 0;
	}
	return (leo);
}
