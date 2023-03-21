#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
*_isalpha - to check for lowercase character
*@c : a letter to be checked
* Return: 1 for lowercase while 0 for upper
*
*/
int _isalpha(int c)
{
	int i = 0;
	char a ='A';
	if (c > 96 && c < 123)
		return (1);
	while (i<=25)
	{
		if (c == a)
			return (1);
		i++;
		a++;
	}
	return (0);
}

