#include <string.h>
#include <stdio.h>
/**
 *_trlen_recursion- A function to return the length of a string
 *@s: string to print its length
 *Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return(1 + _strlen_recursion((s + 1)));
	}
	if (!*s)
	{
		return (0);
	}
}
