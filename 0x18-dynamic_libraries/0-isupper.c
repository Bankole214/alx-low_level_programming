#include "main.h"
/**
*  _isupper - print uppercase character
* @c: function to be printed
*
* Return: 1 if c is uppercase else 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
