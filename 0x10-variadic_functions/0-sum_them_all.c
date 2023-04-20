#include <stdio.h>
#include <stdarg.h>
/**
* sum_them_all - sum 
* @n: number
* Return: an integer
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	int j, add;
	
	if (n == 0)
		return (0);

	va_start(l, n);
	add = 0;

	for(j = 0; j < n; j++)
		add += va_arg(l, int);
	va_end(l);
	return (add);
}
