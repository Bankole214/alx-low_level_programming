#include "main.h"

/**
* _memset - function that fills a memory set
* @s: starting address
* @b: desired destination
* @n: changed number of bytes
* Return: change array array with new values
*/
char *_memset(char *s, char b, unsigned int n)
{
	int j;

	j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
