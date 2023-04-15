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

int main(int argc, char **argv)
{
	int a, b;

	if(argc < 2)
	{
		printf("%d\n", 0);
		return(1);
	}

	a = atoi(argv[1]);
        b = atoi(argv[2]);
	printf("===%d", a);	
	if((isdigit(a) == 0) || (isdigit(b) == 0))
	{
		printf("Error\n");
		return(1);
	}
	
	printf("%d\n", (a+b));
	return(0);
}
