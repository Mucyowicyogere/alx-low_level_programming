#include "function_pointers.h"
#include <stddef.h>
/**
* print_name - to print its name
* @name: name
* @f: function
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	for(i = 0; i < size; i++)
	{
		if(array != NULL && action != NULL)
		{
			action(array[i]);
		}
	}
}
