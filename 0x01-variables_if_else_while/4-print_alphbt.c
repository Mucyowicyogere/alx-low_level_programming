#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 *
 *Return: always 0 (success)
 */
int main(void)
{
	char a = 'a';
	int i = 0;

	do {
		if (a == 'q' || a == 'e')
			continue;
		putchar(a);
		a++;
		i++;
	} while (i <= 25);
	putchar('\n');
	return (0);
}

