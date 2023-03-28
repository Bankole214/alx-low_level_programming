#include "main.h"
/**
* puts2 - function should print one character out of 2
* @str: string
* return: 0
*/
void puts2(char *str)
{
	int leo = 0;
	int i = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		leo++;
	}
	i = leo - 1;
	for (o = 0 ; o <= i ; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}

