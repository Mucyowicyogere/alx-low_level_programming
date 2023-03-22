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
	if (n > 0)
	{
		putchar(43);
		return (1);
	} else if (n < 0)
	{
		putchar(45);
		return(-1);
	}
	putchar(48);
	return(0);
}

