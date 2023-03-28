#include "main.h"
/**
* puts_half - print half of a string
* @str: string
* return: n if number is odd
*/
void puts_half(char *str)
{
	int a, n, leo;

	leo = 0;

	for (a = 0; str[a] != '\0'; a++)
		leo++;

	n = (leo / 2);
	if ((leo % 2) == 1)
		n = ((leo + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
