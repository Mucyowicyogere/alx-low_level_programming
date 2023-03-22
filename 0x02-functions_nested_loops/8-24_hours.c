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
	int h = 0, min = 0, x = 0;

	while (h<24)
        {
                while(min<=59)
                {
                        if (h < 10)
                        {
                                _putchar('0');
                        }
                        else
                        {
                                while (h >= 10)
				{
					x = h / 10;
				}
				if (x == 0)
                                        _putchar(48);
                                else if (x == 1)
                                        _putchar(49);
                                else if (x == 2)
                                        _putchar(50);
                                else if (x == 3)
                                        _putchar(51);
                                else if (x == 4)
                                        _putchar(52);
                                else if (x == 5)
                        }
                                x = h%10;
                                if (x == 0)
                                        _putchar(48);
                                else if (x == 1)
                                        _putchar(49);
                                else if (x == 2)
                                        _putchar(50);
                                else if (x == 3)
                                        _putchar(51);
                                else if (x == 4)
                                        _putchar(52);
                                else if (x == 5)
                                        _putchar(53);
                                else if (x == 6)
                                        _putchar(54);
                                else if (x == 7)
                                        _putchar(55);
                                else if (x == 8)
                                        _putchar(56);
                                else if (x == 9)

			_putchar(':');
			if ( min<10)
				_putchar('0');

		        else
                        {
                                while (min >= 10)
                                {
                                        x = min / 10;
                                }
                                if (x == 0)
                                        _putchar(48);
                                else if (x == 1)
                                        _putchar(49);
                                else if (x == 2)
                                        _putchar(50);
                                else if (x == 3)
                                        _putchar(51);
                                else if (x == 4)
                                        _putchar(52);
                                else if (x == 5)
                        }
			x = min%10;
                                if (x == 0)
                                        _putchar(48);
                                else if (x == 1)
                                        _putchar(49);
                                else if (x == 2)
                                        _putchar(50);
                                else if (x == 3)
                                        _putchar(51);
                                else if (x == 4)
                                        _putchar(52);
                                else if (x == 5)
                                        _putchar(53);
                                else if (x == 6)
                                        _putchar(54);
                                else if (x == 7)
                                        _putchar(55);
                                else if (x == 8)
                                        _putchar(56);
                                else if (x == 9)

			j++;
			_putchar('\n');
		}
		i++;
	}
}
