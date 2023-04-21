#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_numbers - print numbers
* @separator: array strings
* @n: numbers of args
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list l;
	int j;

	va_start(l, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(l, int));
		if (separator == NULL || j == (n - 1))
			continue;
		else
			printf("%s", separator);
	}
	printf("\n");
	va_end(l);
}
