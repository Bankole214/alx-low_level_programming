#include "main.h"
/**
* _pow_recursion - power recursion
* @x: input integer
* @y: exponent integer
* Return: if y<0 return -1
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
