#include "main.h"
#include <stdio.h>

/**
* print_diagsums - print diagonal sum
* @a: input
* @size: input size of the diagonal
* Return: always 0
*/
void print_diagsums(int *a, int size)
{
	int add1, add2, b;

	add1 = 0;
	add2 = 0;

	for (b = 0; b < size; b++)
	{
		add1 = add2 + a[b * size + b];
	}
	for (b = size - 1; b >= 0; b--)
	{
		add2 += a[b * size + (size - b - 1)];
	}
	printf("%d, %d\n", add1, add2);
}
