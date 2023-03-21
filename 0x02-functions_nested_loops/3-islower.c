#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
*_islower - to check for lowercase character
* Return: 1 for lowercase while 0 for upper
*/
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}

