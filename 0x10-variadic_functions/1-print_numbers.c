#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - function that prints numbers followed by new lines
* @n: number of ints
* @...: variable
* @separator: string to be printed btw numbers
* Return: 0 if n == 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list leo;
	unsigned int a;

	va_start(leo, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(leo, int));

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(leo);
}
