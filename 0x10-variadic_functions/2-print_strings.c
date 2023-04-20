#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - function that prints str followed by new line
* @n: number of strings passed
* @...: variable
* @separator: string to be printed bbtw strings
* Return: nilif one of the str is NULL
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sam;
	char *p;
	unsigned int a;

	va_start(sam, n);

	for (a = 0; a < n; a++)
	{
		p = va_arg(sam, char *);

		if (sam == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(sam);
}
