#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 *
 *Return: always 0 (success)
 */
char[] printAlphabets()
{
	char a = 'a';
        int i = 0;
	char [27] letters;
	do {
		letters[i] = a;
                a++;
                i++;
        } while (i <= 25);
        letters[26] = '\n';
	return letters;
int main(void)
{
	printf("&s",printAlphabets());
	
	return (0);
}

