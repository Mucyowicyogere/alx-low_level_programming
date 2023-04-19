#include <stdio.h>
#include "main.h"
/**
*  print_name - to print its name
* @name: name
* @func: function
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
