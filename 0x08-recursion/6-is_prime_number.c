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
	int i;
	if (n == 0 || n == 1)
		return (0);
	
	while (i <= (n / 2)) 
	{

		if (n % i == 0) 
		{
			return 0;
			break;
		}
		i++;
	}
	return(1);
}
