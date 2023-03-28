#include "main.h"
/**
* print_rev - print the reverse
* @s: string
* return: always 0
*/
void print_rev(char *s)
{
	int leo = 0;
	int i;

	while (*s != '\0')
	{
		leo++;
		s++;

	}
	s--;
	for (i = leo; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
