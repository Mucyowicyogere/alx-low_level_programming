#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
*_isupper - to check for upper case
*
*/
void _isupper(char c)
{
	int i = c;
	if (i >= 65 && i < 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

