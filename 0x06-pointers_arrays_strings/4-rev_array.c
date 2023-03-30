#include <string.h>
/**
 * reverse_array - A function that reverses the content of an array of integers.
 * @a: The array to reverse
 * @n: The number of elements
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;
	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
