#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_strings - print strings 
* @separator: string
* @n: numbers of args
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list l;
	char * word;
	unsigned int j;

	va_start(l, n);

	for(j = 0; j < n; j++)
	{
		word = va_arg(l, char*);
		if (separator == NULL || j == (n - 1))
		{
			if(word == NULL)
				printf("(nil)");
			else
				printf("%s", word);
		}
		else
		{
			if(word == NULL)
                                printf("(nil)%s", separator);
                        else
				printf("%s%s", word, separator);
		}
	}
	va_end(l);
	printf("\n");
}
