#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @size: bytes to be allocated
 * @nmemb: elements
 * Return: a pointer to the allocated memory else, NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *leo;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	leo = malloc(size * nmemb);

	if (leo == NULL)
	{
		return (NULL);
	}
	memset(leo, 0, size * nmemb);
	return (leo);
}
