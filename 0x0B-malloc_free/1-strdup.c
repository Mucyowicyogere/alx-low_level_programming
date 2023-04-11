#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*_strdup - to mem allocation
*@str: string
*Return: string
**/
char *_strdup(char *str)
{
	char *ar;
	int i, len;
	if (str == NULL)
		return (NULL);
	len = strlen(str) + 1;
	ar =(char*)malloc(len * sizeof(char));
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ar[i] = str[i];
		i++;
	}
//	ar[i] = '\0';
	return (ar);
}
