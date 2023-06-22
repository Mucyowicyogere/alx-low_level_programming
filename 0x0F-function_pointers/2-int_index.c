#include "function_pointers.h"
#include <stddef.h>
/**
* int_index - to find and return index
* @array: array
* @size: size
* @cmp: function
* Return: integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for(i = 0; i < size; i++)
	{
		if(cmp(array[i]) != 0)
			return cmp(array[i]);
	}
	return (-1);
}
