#include "main.h"

/**
 * _strpbrk -method that  matches specified char 
 * @s: string to scan
 * @accept:char in 1st string which matches char in 2nd string
 *Return: a string which matches specified char
 **/

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0') /*Declaring WHILE*/
	{
		j = 0;
		while (accept[j] != '\0')  /*Evaluating *accept*/
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++; /*add j+1*/
		}

		s++; /*add s+1*/
	}
	return (0);

}
