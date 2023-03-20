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
	do{
		putchar(a);
		a++;
	} while (a != 'z');
	return (0);
}

