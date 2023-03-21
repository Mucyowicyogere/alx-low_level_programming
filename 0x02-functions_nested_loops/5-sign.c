#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
*print_sign(int n) to print signs 
*@c : a number to be checked
* Return  while 0 for upper
*
*/
int print_sign(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n > 0)
		return (1);
	return (0);
}

