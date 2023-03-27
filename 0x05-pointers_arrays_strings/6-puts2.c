#include <stdio.h>
#include <string.h>
/**
 * puts2 - A function to print a character and skip the next
 * @s : The string to print from
 * Return: Nothing
 */
void puts2(char *s)
{
	int i, length;

	length = strlen(s);
	for (i = 0; i < length; i = i + 2)
		printf("%c", s[i]);
	printf("\n");
}
