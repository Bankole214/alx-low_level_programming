#include "main.h"
#include <stdlib.h>


/**
* create_array - function that creates an arrays of chars and init a spec char
* @size: size of array
* @c: char
* Return: pointer to array else NULL
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int j;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
	{
		ptr[j] = c;
	}
	return (ptr);
}
