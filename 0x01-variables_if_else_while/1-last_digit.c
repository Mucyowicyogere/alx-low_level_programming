#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 *
 *Return: always 0 (success)
 */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	digit = n % 10;
	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5.\n", n, digit);
	else if (digit = 0)
		printf("Last digit of %d is %d and is 0.", n, digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0.", n, digit);
	return (0);
}

