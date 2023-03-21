#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * main - entry point
 *
 *Return: always 0 (success)
 */

void print_alphabet(void)
{
	char a = 'a';
	int i = 0;

	do {
		putchar(a);
		a++;
		i++;
	} while (i <= 25);
	putchar('\n');
}

