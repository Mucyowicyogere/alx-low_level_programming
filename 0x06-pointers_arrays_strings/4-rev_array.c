#include <string.h>
/**
 * reverse_array - A function that reverses the content of an array of integers.
 * @a: The array to reverse
 * @n: The number of elements
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	for (int i = n-1; i>=0; i--)
	{
		if ( i != n-1)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
