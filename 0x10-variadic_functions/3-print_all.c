#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_all - print all
* @formator: format
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list l;
	unsigned int j, k;
	double d;
	char c;
	char* s;
	va_start(l, format);
	j = 0;
	while ( format[j] && format)
	{
		switch (format[j])
		{
			case 'i':
				k = va_arg(l, int);
				printf("%d", k);
				break;
			 case 'f':
				d = va_arg(l, double);
                                printf("%f", d);
                                break;
			case 'c':
                                c = va_arg(l, int);
                                printf("%c", c);
                                break;
			case 's':
                                s = va_arg(l, char*);
				if (s)
                                	printf("%s", s);
				if (!s)
					printf("(nil)");
                                break;
			default:
				break;
		}
		j++;
	}
	va_end(l);
	printf("\n");
}

