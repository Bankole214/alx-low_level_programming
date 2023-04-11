#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - function that duplicate a string
* @str: string
* Return: NULL if str is null else pointer
*/

char *_strdup(char *str)
{
	char *ptr;
	int a, c = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	ptr = malloc(sizeof(char) * (a + 1));
	if (ptr == NULL)
		return (NULL);
	for (c = 0; str[c]; c++)
		ptr[c] = str[c];
	return (ptr);
}
