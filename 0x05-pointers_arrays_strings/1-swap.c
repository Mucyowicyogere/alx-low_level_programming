/**
 * swap_int - it swaps 2 integers
 * @x: Pointer to the address of the first value to swap
 * @y: Pointer to the addresse of the second value to swap
 * Return: void
 */
void swap_int(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
