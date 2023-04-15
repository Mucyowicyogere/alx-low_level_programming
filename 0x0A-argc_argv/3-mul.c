#include <stdio.h>
#include "main.h"
/**
*main - to print its name
*@argc: args number
*@argv: array
*Return: 0
**/

int main(int argc, char **argv )
{
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return(1);
	}
	a = argv[1];
	b = argv[2];
	printf("%d\n", (a*b));
	return(0);
}
