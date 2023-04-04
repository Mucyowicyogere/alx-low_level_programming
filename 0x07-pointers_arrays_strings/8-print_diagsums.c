#include <stdio.h>
/**
 * print_diagsums - A function to print the diagonals of a square matrix
 * @a: The matrix
 * @size: The matrix size
 * Return: Nothing
 */
 void print_diagsums(int *a, int size)
 {
	 int i, sum1, sum2;

	 sum1 = sum2 = 0;
	 for (i = 0; i < size; i++)
	 {
		 sum1 += a[i][i];
		 sum2 += a[i][size - (i + 1)];
	 }
	 printf("%d, %d\n", sum1, sum2)
 }
