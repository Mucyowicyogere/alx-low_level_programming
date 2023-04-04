#include "string.h"
/**
 *_strpbrk - A function to search for the first occurence of a string in a string
 *@s: The string in which to search
 *@accept: The string to be searched
 *Return: A pointer to the byte in @s or NULL if the byter is not there
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
