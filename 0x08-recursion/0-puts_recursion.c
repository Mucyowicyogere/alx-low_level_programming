#include <string.h>
#include <stdio.h>
/**
 *_puts_recursion - A function to print a string
 *@s: string to print 
 *Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(*s+1);
	}
	if (!*s)
	{
		puts('\n');
		return;
	}
}
