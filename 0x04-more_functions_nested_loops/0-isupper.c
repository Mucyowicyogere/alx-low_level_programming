#include <stdlib.h>
#include <stdio.h>
/**
 * _isupper - This function check whether a character is uppercase or not
 * @c : An int argument for the character to check
 * Return : 1 for uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return 0;
}

