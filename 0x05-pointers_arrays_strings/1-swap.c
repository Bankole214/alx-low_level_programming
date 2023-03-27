#include "main.h"

/**
* swap_int - swap values of 2 integers
* @a: first int
* @b: 2nd int
* Return: return swap values of the integers
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
