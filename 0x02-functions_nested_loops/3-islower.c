#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
*_islower - to check for lowercase character
*
*/
int _islower(int c)
{
	int i = 0, j = 0;
	char a = 'a';


	while (j <= 25)
	{
		if( c == a)
			return 1;
			a++;
	}
	return 0;
}

