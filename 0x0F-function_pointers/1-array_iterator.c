#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
* array_iterator - function that executes a function given as parameter
* @array: array
* @size: size of array
* @action: pointer to print
* Return: always 0
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
