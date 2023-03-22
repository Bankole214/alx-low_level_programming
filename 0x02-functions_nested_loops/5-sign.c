#include "main.h"
/**
* print_sign - print sign of a number
* @n: sign to be checked
* Return: 1 is sign checked is +ve else if 0 else -ve
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
