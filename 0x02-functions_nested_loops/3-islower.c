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
	if (c > 96 && c < 123)
		return (1);
	return (0);
}

