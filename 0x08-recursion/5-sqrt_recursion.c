#include "main.h"
/**
* _sqrt_recursion - function that return natural sqr root of a number
* @n: input
* Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
* actual_sqrt_recursion - find natural sqrt
* @n: natural number
* @i: iterator
* Return: sqrt of the input
*/
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
