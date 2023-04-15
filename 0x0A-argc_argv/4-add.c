#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
*main - to add 2 numbers
*@argc: args number
*@argv: array
*Return: 0
**/
int main(int argc, char *argv[])
{
	int i, a, add;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (1);
	}
	add = 0;
	for (i = 1; i < argc; i++)
	{
		a = atoi(argv[i]);
		if (a == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		add = add + a;
	}
	printf("%d\n", (add));
	return (0);
}
