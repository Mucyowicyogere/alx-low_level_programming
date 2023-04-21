#include <stdio.h>
#include <stdarg.h>
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
		if (separator == NULL || j == (n - 1))
			printf("%d", va_arg(l, int));
		else
			printf("%d%s", va_arg(l, int), separator);
	}
	va_end(l);
	printf("\n");
}
