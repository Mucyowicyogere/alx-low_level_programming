#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
*print_alphabet - to print alphabets
*
*/
void print_alphabet_x10(void)
{
	int i = 0, j = 0;
	char a = 'a';

	do {
		while (j <= 25)
		{

			putchar(a);
			a++;
			j++;
		}
		putchar('\n');
		a = 'a';
		j = 0;
		i++;
	} while (i < 10);

}

