#include "main.h"
/**
 *_memset - fills memory
 *@s: string to be encoded
 *@b: value
 *@n: bytes
 *Return: detination
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/*Declaring FOR*/
	for (i = 0; i < n; i++)
	{
		/*add 1 position s*/
		*(s + i) = b;/
	}
       	/*END FOR*/
	return (s);
}
