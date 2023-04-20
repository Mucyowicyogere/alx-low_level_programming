#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - print strings 
* @separator: string
* @n: numbers of args
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list l;
	int j;

	va_start(l, n);

	for(j = 0; j < n; j++)
	{
		if (separator != NULL)
		{
			if(!va_arg(l, int))
				printf("(nil)\n");
			else
				printf("%d\n", va_arg(l, int));
		}
		else
		{
			if(!va_arg(l, int))
                                printf("(nil)%s\n", separator);
                        else
				printf("%d%s\n", va_arg(l, int), separator);
		}
	}
	va_end(l);
	printf("\n");
}
