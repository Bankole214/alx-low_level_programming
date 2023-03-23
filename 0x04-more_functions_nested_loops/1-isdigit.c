#include "main.h"
/**
* _isdigit - function that check between 0-9
* @c: check for digit
*
* Return:f digit else 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
