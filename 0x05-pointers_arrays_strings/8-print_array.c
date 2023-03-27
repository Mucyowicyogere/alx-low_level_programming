#include <stdio.h>
/**
 * print_array - This function prints elements of an array
 * @x: Array
 * @n: Number of elements in the array
 */
void print_array(int *x, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", x[i]);
		if (i <= n - 2)
			printf(", ");
	}
	printf("\n");
}
