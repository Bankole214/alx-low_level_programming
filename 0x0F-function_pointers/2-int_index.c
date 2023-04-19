#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
* int_index - function that searches for an ints
* @array: array
* @size: size
* @cmp: pointer
* Return: always 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
