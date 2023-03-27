#include <string.h>
#include <stdio.h>
/**
 * print_rev - A function to print a string in reverse
 * @s: A string to reverse
 * Return: void
 */
void print_rev(char *str)
{
	int l = strlen(str) - 1;
	int w;

	for (w = l; w >= 0; w--)
		printf("%c", str[w]);
	putchar(10);
}
