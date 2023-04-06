#include <string.h>
#include <stdio.h>
#include <math.h>
int is_prime_number( int n);
/**
 *prime - helper method for prime numbers
 *@x : odd number
 *@y: number
Return: number;
*/
int prime(int x, int y)
{
	if (y == 1)
	{
		return (1);
	}
	if (x % y != 0)
	{
		return (prime(x, x - 1));
	}
	if (y > 0 && x % y == 0)
	{
		return (0);
	}
	return (0);
}
/**
 *is_prime_number - method for prime numbers
 *@n: number
Return: number;
*/
int is_prime_number( int n)
{
        if (n == 0 || n == 1 || n < 0)
                return (0);
	else
        	return (prime(n, n - 1));
}
