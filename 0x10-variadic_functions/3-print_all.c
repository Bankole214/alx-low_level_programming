#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *p, *emp = "";

	va_list leo;

	va_start(leo, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", emp, va_arg(leo, int));
					break;
				case 'i':
					printf("%s%d", emp, va_arg(leo, int));
					break;
				case 'f':
					printf("%s%f", emp, va_arg(leo, double));
					break;
				case 's':
					p = va_arg(leo, char *);
					if (!p)
						p = "(nil)";
					printf("%s%s", emp, p);
					break;
				default:
					a++;
					continue;
			}
			emp = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(leo);
}

