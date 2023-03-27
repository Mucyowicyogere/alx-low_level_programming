#include <stdio.h>
#include <string.h>
/**
 * puts_half - The function prints last n characters
 * @s: The string to print n characters from
 * Return: void
 */
void puts_half(char *s)
{
	int length = strlen(s), n, i;

	if (length % 2 != 0)
		n = (length - 1) / 2;
	else
		n = length / 2;
	if (n > 50)
		n++;
	for (i = n; i < length; i++)
		printf("%c", s[i]);
	printf("\n");
}
