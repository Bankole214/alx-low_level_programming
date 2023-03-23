#include "main.h"
/**
* print_most_numbers - print numbers between 0-9 excluding 2 and 4
*
* Return: Always 0
*/
void print_most_numbers(void)
{
	short i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2)
		{
			if (i != 4)
			{
				_putchar(i + '0');
			}
		}
	}
	_putchar('\n');
}
