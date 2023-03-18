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
	for(int i = 0; i<26; i++)
	{
		putchar(a);
		a++;
	}
	return (0);
}

