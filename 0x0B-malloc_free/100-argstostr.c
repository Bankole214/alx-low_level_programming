#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concat all args of programs.
 * @ac: input integers
 * @av: double pointer
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	int a;
	int b;
	int s;
	int l;
	char *ptr;

	s = 0;
	l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			l++;
	}
	l += ac;

	ptr = malloc(sizeof(char) * l + 1);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			ptr[s] = av[a][b];
			s++;
		}
	}
	if (ptr[s] == '\0')
	{
		ptr[s++] = '\n';
	}
	return (ptr);
}

