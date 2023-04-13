#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concat 2 strings
 * @s1: string
 * @s2: string
 * @n: number of bytes
 * Return: NULL if function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int a, b, len1, len2;

	a = 0;
	b = 0;
	len1 = 0;
	len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < 2)
		t = malloc(sizeof(char) * (len1 + n + 1));
	else
		t = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!t)
		return (NULL);
	while (a < len1)
	{
		t[a] = s1[a];
		a++;
	}
	while (n < len2 && a < (len1 + n))
		t[a++] = s2[b++];
	while (n >= len2 && a < (len1 + len2))
		t[a++] = s2[b++];
	t[a] = '\0';
	return (t);
}
