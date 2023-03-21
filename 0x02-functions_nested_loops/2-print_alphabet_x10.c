#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
*print_alphabet - to print alphabets
*
*/
void print_alphabet_x10()
{
	int i = 0, j = 0;
	char a = 'a';

	do {
		while( j<10)
		{

			putchar(a);
			j++;
		}
		a++;
		i++;
	} while (i <= 25);
	putchar('\n');
}

