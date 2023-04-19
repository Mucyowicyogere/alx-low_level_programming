#include "function_pointers.h"
#include <stddef.h>
/**
* print_name - to print its name
* @name: name
* @f: function
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if(name != NULL && f != NULL)
		f(name);
}
