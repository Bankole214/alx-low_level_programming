#include "main.h"
/**
* print_alphabet_x10 - code that print lower case x10
*
* Return: Always 0;
*/

void print_alphabet_x10(void)
{
	char b;
	int i = 0;

	while (i <= 9)
	{
	for (b = 'a'; b <= 'z'; b++)
	{
	_putchar(b);
	}
	_putchar('\n');
	i++;
	}
}
