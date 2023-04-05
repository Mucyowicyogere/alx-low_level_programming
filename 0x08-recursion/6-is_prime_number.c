#include <string.h>
#include <stdio.h>
#include <math.h>
/**
 *sqrt_rec_odd - helper method for odd numbers
 *@s : odd number
 *@n: number
Return: number;
*/
int is_prime_number( int n)
{
	if (n == 0 || n == 1)
		return (0);
	for (int i = 2; i <= (n / 2); ++i) {

		if (n % i == 0) 
		{
			return 0;
			break;
		}
	}
	return(1);
}
