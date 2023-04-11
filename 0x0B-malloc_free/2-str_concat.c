#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*str_concat - to concatenate 2 strings
*@s1: string
*@s2: string
*Return: string
**/
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i, len1, len2;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2) + 1;
	ar = (char *)malloc((len1 + len2) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	i = 0;
	if (s1 != NULL)
	{
		while (i < (len1))
		{
			ar[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (i < (len1 + len2))
		{
			ar[i] = s2[i - len1];
			i++;
		}
	}

	ar[i] = '\0';

	return (ar);
}
