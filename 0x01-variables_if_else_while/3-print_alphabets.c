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
	char a = 'a', A = 'A';
	int i = 0;

	do {
		putchar(a);
		putchar(A);
		a++;
		i++;
	} while (i <= 25);
	putchar('\n');
	return (0);
}

