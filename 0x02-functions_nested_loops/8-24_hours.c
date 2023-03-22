#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
*jack_bauer - to print minutes
*@n : a number to be checked
* Return:  0 
*
*/
void jack_bauer(void)
{
	int i = 0, j = 0;

	while (i<24)
	{
		while(j<=59)
		{
			if (i < 10)
				_putchar('0');
			_putchar(i);
			_putchar(':');
			if ( j<10)
				_putchar('0');
			_putchar(j);
			j++;
			i++;
		}
		_putchar('\n');
	}
}
