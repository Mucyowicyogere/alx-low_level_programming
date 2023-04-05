#include <string.h>
#include <stdio.h>
/**
 *factorial - A function to do factorial
 *@n: number 
 *Return: number
 */

int factorial(int n )

{
	if (n == 0)
		return 1;
	if (n < 0)
		return (-1);
	return (n*factorial(n-1));
}
