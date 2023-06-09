#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - su
*@n: number
*Return: an integer
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	unsigned int j, plus;

	plus = 0;
	if (n == 0)
		return (0);
	va_start(l, n);
	for (j = 0; j < n; j++)
		plus += va_arg(l, int);
	va_end(l);
	return (plus);
}
