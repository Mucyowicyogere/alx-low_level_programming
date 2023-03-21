#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
*print_alphabet - to print alphabets
*
*/
void repeat_alphabet(char a)
{
	int i = 0;

	do {
		putchar(a);
		a++;
		i++;
	} while (i <= 9);
	putchar('\n');
}

