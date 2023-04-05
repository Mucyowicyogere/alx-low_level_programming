#include <string.h>
#include <stdio.h>
/**
 *_print_rev_recursion - A function to print reversely a string
 *@s: string to print
 *Return: 0
 */

void _print_rev_recursion(char *s)
{
	int i =-1;
	if (*s)
	{
		_puts_recursion((s+1));
		putchar(*s);
	}
	if (!*s)
	{
		return;
	}
}
