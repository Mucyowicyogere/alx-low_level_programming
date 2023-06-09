#include "function_pointers.h"
#include <stddef.h>
/**
* array_iterator - to iterate array
* @array: array
* @size: size
* @action: function
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for(i = 0; i < size; i++)
		action(array[i]);
}
