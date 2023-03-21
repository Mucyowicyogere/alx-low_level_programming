#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * main - entry point
 *
 *Return: always 0 (success)
 */
int main(void)
{
	char[8] put = "_putchar";
	int i = 0;

	do {
		putchar(put[i]);
		i++;
	} while (i <= 7);
	putchar('\n');
	return (0);
}

