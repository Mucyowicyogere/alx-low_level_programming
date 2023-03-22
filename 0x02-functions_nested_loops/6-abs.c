#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
*_abs - absolute value
*@n : a number to be checked
* Return:  returns n
*
*/
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	return (n);
}

