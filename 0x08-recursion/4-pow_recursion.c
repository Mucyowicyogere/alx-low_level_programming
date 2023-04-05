#include <string.h>
#include <stdio.h>
#include <math.h>
/**
 *sqrt_rec_odd - helper method for odd numbers
 *@s : odd number
 *@n: number
Return: number;
*/
int sqrt_help(int s, int n)
{
	if (s == (pow(n,2))
	{
		return (n);
	}
	if (n < 0)
		reutn (-1);
	return (sqrt_help(s, n-2));
}

/**
 *_sqrt_recursion - function to do recutsive sqrt
 *@n: number
 *Return: number
 */

int _sqrt_recursion(int n)
{
	int x;
	if (n >= 0 && n <= 1 )
        {
                return (n);
        }
	if (n < 0)
		return (-1);
	
	if (n % 2)		
		return (sqrt_helper(n, (n - 2)));
	if (!(n % 2))
	{
		if ((n / x) == x)
		{
			return x;
		}
		if (n == 2 || (n / 2) ==2)
		{
			return (2);
		}
		if( x > 1)
		{
			return (x * 2);
		}
		x = _sqrt_recursion(n/2);
		return (-1);
	}
}
