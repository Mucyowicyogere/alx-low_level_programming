#include <string.h>
/**
 * reverse_array - A function that reverses the content of an array of intergers.
 * @a: The array to reverse
 * @n: The 
 * Return: 0 only when strings matches, a -ve value when they do not match
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
}
