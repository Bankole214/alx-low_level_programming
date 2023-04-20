#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - function that return the sum of all its parameters
* @n: number of parameters
* @...: variable
* Return: 0 if n == 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list dj;
	unsigned int a, sum = 0;

	va_start(dj, n);

	for (a = 0; a < n; a++)
		sum += va_arg(dj, int);
	va_end(dj);
	return (sum);
}
