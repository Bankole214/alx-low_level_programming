#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *leo;
	int a;
	int nut;

	if (min > max)
		return (NULL);
	nut = max - min + 1;

	leo = malloc(sizeof(int) * nut);
	if (leo == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		leo[a] = min++;
	return (leo);
}
