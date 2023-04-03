#include "main.h"

/**
* _memcpy - memory copy
* @dest: destination
* @src: source of memory
* @n: number of bytes
* Return: cpy memory with changed byte
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a, b;

	a = 0;
	b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
