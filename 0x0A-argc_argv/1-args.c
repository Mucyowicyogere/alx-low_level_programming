#include <stdio.h>
#include "main.h"
/**
*main - to print its name
*@argc: args number
*@argv: array
*Return: 0
**/

int main(int argc, char* argv[] __attribute__((unused)))
{
	printf("%d\n", argc-1);
	return (0);
}
