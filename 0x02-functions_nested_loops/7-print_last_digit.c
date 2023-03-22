#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
*print_last_digit - to print signs
*@n : a number to be checked
* Return:  while 0 for upper
*
*/
int print_last_digit(int n)
{
	int r, m;

	r = n % 10;
	if (r < 0)
		r = -1 * r;
	_putchar(r);
	return (r);

